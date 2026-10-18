#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define CLASS_3_107D88E49CCA98ED_METHOD_3_14F2FC46FC687955_OFFSET UNITYSDK_OFFSET(0x1CCC0B80)
#define CLASS_3_107D88E49CCA98ED_METHOD_3_9327C2B359D1FC32_OFFSET UNITYSDK_OFFSET(0x1CCC0C60)
#define CLASS_3_107D88E49CCA98ED__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC0C00)

inline static constexpr unsigned int Class_3_107D88E49CCA98ED_TypeDefinitionIndex = 10190;

class Class_3_107D88E49CCA98ED : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* FMLGGKAFMKC; // 0x18
	::System::String* NGLHBNHGFOF; // 0x20
	::System::String* GCENKLGDENI; // 0x28
	::Il2CppArray<::System::String*>* NLDPAJFCHIL; // 0x30
	::Il2CppArray<::System::String*>* BCBNHCLDDFH; // 0x38
	::System::String* NNODOGJBAJM; // 0x40
	::System::String* AEIGKENAOJO; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_107D88E49CCA98ED__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_14F2FC46FC687955(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_107D88E49CCA98ED*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_107D88E49CCA98ED*&))((::PBYTE)hIl2Cpp + CLASS_3_107D88E49CCA98ED_METHOD_3_14F2FC46FC687955_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9327C2B359D1FC32(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_107D88E49CCA98ED* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_107D88E49CCA98ED*))((::PBYTE)hIl2Cpp + CLASS_3_107D88E49CCA98ED_METHOD_3_9327C2B359D1FC32_OFFSET))(a1, a2);
	}
};
