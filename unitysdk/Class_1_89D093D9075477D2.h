#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightEquipConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_89D093D9075477D2_METHOD_1_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0x18D28450)
#define CLASS_1_89D093D9075477D2_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x18D28340)
#define CLASS_1_89D093D9075477D2_METHOD_1_F16934990B9C682D_OFFSET UNITYSDK_OFFSET(0x18D28390)
#define CLASS_1_89D093D9075477D2__CTOR_OFFSET UNITYSDK_OFFSET(0x18D28710)

inline static constexpr unsigned int Class_1_89D093D9075477D2_TypeDefinitionIndex = 64632;

class Class_1_89D093D9075477D2 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GridFightEquipConfigRow*>** StaticGet_DADPNEEFNHB()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GridFightEquipConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_89D093D9075477D2_TypeDefinitionIndex)->GetStaticField(0x63E80);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89D093D9075477D2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_89D093D9075477D2_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::RPG::GameCore::GridFightEquipConfigRow* Method_1_F16934990B9C682D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightEquipConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_89D093D9075477D2_METHOD_1_F16934990B9C682D_OFFSET))(a1);
	}

	static ::System::Void Method_1_03BFDB1C3240A55A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_89D093D9075477D2_METHOD_1_03BFDB1C3240A55A_OFFSET))();
	}
};
