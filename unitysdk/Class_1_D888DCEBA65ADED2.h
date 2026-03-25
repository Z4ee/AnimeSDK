#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleHintToastStyle.h"
#include "unitysdk/System/Object.h"

class Class_1_D888DCEBA65ADED2_Class_0_16E7307DCC43CB2C_18;
class Class_1_D888DCEBA65ADED2_Class_1_2EE2A87B2C9276B8;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D888DCEBA65ADED2_METHOD_1_38013690DCAD84EA_OFFSET UNITYSDK_OFFSET(0xA1E1CE0)
#define CLASS_1_D888DCEBA65ADED2_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xA1E1DA0)
#define CLASS_1_D888DCEBA65ADED2_METHOD_1_F2B94768004EB1C1_OFFSET UNITYSDK_OFFSET(0xA1E1ED0)
#define CLASS_1_D888DCEBA65ADED2__CTOR_OFFSET UNITYSDK_OFFSET(0xA1E1FC0)

inline static constexpr unsigned int Class_1_D888DCEBA65ADED2_TypeDefinitionIndex = 58740;

class Class_1_D888DCEBA65ADED2 : public ::System::Object
{
public:
	static ::Class_1_D888DCEBA65ADED2** StaticGet_Field_1_0()
	{
		return (::Class_1_D888DCEBA65ADED2**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D888DCEBA65ADED2_TypeDefinitionIndex)->GetStaticField(0x47CB0);
	}
	::Class_1_D888DCEBA65ADED2_Class_1_2EE2A87B2C9276B8* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleHintToastStyle, ::Class_1_D888DCEBA65ADED2_Class_0_16E7307DCC43CB2C_18*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D888DCEBA65ADED2__CTOR_OFFSET))(this);
	}

	::Class_1_D888DCEBA65ADED2_Class_0_16E7307DCC43CB2C_18* Method_1_38013690DCAD84EA(::RPG::GameCore::BattleHintToastStyle a1)
	{
		return ((::Class_1_D888DCEBA65ADED2_Class_0_16E7307DCC43CB2C_18*(*)(::PVOID, ::RPG::GameCore::BattleHintToastStyle))((::PBYTE)hIl2Cpp + CLASS_1_D888DCEBA65ADED2_METHOD_1_38013690DCAD84EA_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D888DCEBA65ADED2_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	static ::Class_1_D888DCEBA65ADED2* Method_1_F2B94768004EB1C1()
	{
		return ((::Class_1_D888DCEBA65ADED2*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D888DCEBA65ADED2_METHOD_1_F2B94768004EB1C1_OFFSET))();
	}
};
