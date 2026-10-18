#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define CLASS_3_107D88E49CCA98ED_METHOD_3_14F2FC46FC687955_OFFSET UNITYSDK_OFFSET(0x1CCEED00)
#define CLASS_3_107D88E49CCA98ED_METHOD_3_9327C2B359D1FC32_OFFSET UNITYSDK_OFFSET(0x1CCEEDE0)
#define CLASS_3_107D88E49CCA98ED__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEED80)

inline static constexpr unsigned int Class_3_107D88E49CCA98ED_TypeDefinitionIndex = 10190;

class Class_3_107D88E49CCA98ED : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* FMLGGKAFMKC; // 0x18
	::System::String* NNODOGJBAJM; // 0x20
	::Il2CppArray<::System::String*>* BCBNHCLDDFH; // 0x28
	::System::String* NGLHBNHGFOF; // 0x30
	::System::String* AEIGKENAOJO; // 0x38
	::Il2CppArray<::System::String*>* NLDPAJFCHIL; // 0x40
	::System::String* GCENKLGDENI; // 0x48

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
