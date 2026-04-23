#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6854A6346A56B2FF.h"
#include "unitysdk/RPG/Client/ETravelShipState.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_C187E3BA406EEF9F;
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0x12400030)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_29861B2485680DBB_OFFSET UNITYSDK_OFFSET(0x123FEEF0)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x12400700)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_688186F2055D9272_OFFSET UNITYSDK_OFFSET(0x123FF510)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_72F4966F7A4AB8A7_OFFSET UNITYSDK_OFFSET(0x12400690)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x124001F0)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_8C97CA3BAB7FB2D7_OFFSET UNITYSDK_OFFSET(0x124004E0)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_972F9F2CC17A4649_1_OFFSET UNITYSDK_OFFSET(0x12400610)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_972F9F2CC17A4649_OFFSET UNITYSDK_OFFSET(0x12400570)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_99131D1892AB4AC7_OFFSET UNITYSDK_OFFSET(0x12400330)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_EC99D2266C93F3B8_OFFSET UNITYSDK_OFFSET(0x123FF320)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_FEF7F52C54F676AE_OFFSET UNITYSDK_OFFSET(0x123FE980)
#define CLASS_2_58EEDBAFC5C5D1E8__CTOR_OFFSET UNITYSDK_OFFSET(0x123FE900)

inline static constexpr unsigned int Class_2_58EEDBAFC5C5D1E8_TypeDefinitionIndex = 63435;

class Class_2_58EEDBAFC5C5D1E8 : public ::Class_1_6854A6346A56B2FF
{
public:
	::System::Nullable_1<::System::Single> Field_2_0; // 0x48
	::System::Boolean Field_2_1; // 0x50

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_1_C187E3BA406EEF9F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_C187E3BA406EEF9F*))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FEF7F52C54F676AE(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_FEF7F52C54F676AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_EC99D2266C93F3B8(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_EC99D2266C93F3B8_OFFSET))(this, a1);
	}

	::System::Void Method_2_688186F2055D9272(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_688186F2055D9272_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_08DCF72FBE01FF99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_08DCF72FBE01FF99_OFFSET))(this);
	}

	::System::Void Method_2_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_2_29861B2485680DBB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_29861B2485680DBB_OFFSET))(this, a1);
	}

	::System::Single Method_2_99131D1892AB4AC7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_99131D1892AB4AC7_OFFSET))(this);
	}

	::System::Single Method_2_8C97CA3BAB7FB2D7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_8C97CA3BAB7FB2D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_972F9F2CC17A4649(::System::Nullable_1<::RPG::Client::ETravelShipState> P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_972F9F2CC17A4649_OFFSET))(this, P0);
	}

	::System::Void Method_2_972F9F2CC17A4649_1(::System::Nullable_1<::RPG::Client::ETravelShipState> P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_972F9F2CC17A4649_1_OFFSET))(this, P0);
	}

	::System::Void Method_2_72F4966F7A4AB8A7(::RPG::GameCore::CharacterInputData* P0, ::System::Single P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_72F4966F7A4AB8A7_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
