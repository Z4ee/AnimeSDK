#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PropDynamicResConfig; }
namespace RPG::GameCore { class PropDynamicResConfigItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6357FCCA5A7165EA_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB4A1F60)
#define CLASS_1_6357FCCA5A7165EA_METHOD_1_BC68E9F9EA354BAB_OFFSET UNITYSDK_OFFSET(0xB4A1FB0)
#define CLASS_1_6357FCCA5A7165EA_METHOD_1_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0xB4A1D50)
#define CLASS_1_6357FCCA5A7165EA_METHOD_1_E9977E6C7A715233_OFFSET UNITYSDK_OFFSET(0xB4A20A0)

inline static constexpr unsigned int Class_1_6357FCCA5A7165EA_TypeDefinitionIndex = 67502;

class Class_1_6357FCCA5A7165EA : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::PropDynamicResConfigItem*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::PropDynamicResConfigItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6357FCCA5A7165EA_TypeDefinitionIndex)->GetStaticField(0x68FF0);
	}
	static ::RPG::GameCore::PropDynamicResConfig** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::PropDynamicResConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6357FCCA5A7165EA_TypeDefinitionIndex)->GetStaticField(0x68FF8);
	}

	static ::System::Void Method_1_D799715F2EF979EA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6357FCCA5A7165EA_METHOD_1_D799715F2EF979EA_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6357FCCA5A7165EA_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::RPG::GameCore::PropDynamicResConfigItem* Method_1_BC68E9F9EA354BAB(::System::String* a1)
	{
		return ((::RPG::GameCore::PropDynamicResConfigItem*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6357FCCA5A7165EA_METHOD_1_BC68E9F9EA354BAB_OFFSET))(a1);
	}

	static ::RPG::GameCore::PropDynamicResConfig* Method_1_E9977E6C7A715233()
	{
		return ((::RPG::GameCore::PropDynamicResConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6357FCCA5A7165EA_METHOD_1_E9977E6C7A715233_OFFSET))();
	}
};
