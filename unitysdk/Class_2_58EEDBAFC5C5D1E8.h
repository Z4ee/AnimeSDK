#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6854A6346A56B2FF.h"
#include "unitysdk/RPG/Client/ETravelShipState.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_6338FD15AFE99D89;
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_07D7C7513828ED45_OFFSET UNITYSDK_OFFSET(0xBF3C540)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0xBF3BF70)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_1C77BEFB194FCFF1_OFFSET UNITYSDK_OFFSET(0xBF3ADE0)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xBF3C610)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_688186F2055D9272_OFFSET UNITYSDK_OFFSET(0xBF3B450)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_793399FBE48890BB_OFFSET UNITYSDK_OFFSET(0xBF3C4B0)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_8C97CA3BAB7FB2D7_OFFSET UNITYSDK_OFFSET(0xBF3C420)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_99131D1892AB4AC7_OFFSET UNITYSDK_OFFSET(0xBF3C260)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0xBF3C110)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_E9509488FE655E8C_OFFSET UNITYSDK_OFFSET(0xBF3C5B0)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_EB077AEDD09ED2BB_OFFSET UNITYSDK_OFFSET(0xBF3A820)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_EC99D2266C93F3B8_OFFSET UNITYSDK_OFFSET(0xBF3B250)
#define CLASS_2_58EEDBAFC5C5D1E8__CTOR_OFFSET UNITYSDK_OFFSET(0xBF3A7A0)

inline static constexpr unsigned int Class_2_58EEDBAFC5C5D1E8_TypeDefinitionIndex = 64352;

class Class_2_58EEDBAFC5C5D1E8 : public ::Class_1_6854A6346A56B2FF
{
public:
	::System::Nullable_1<::System::Single> Field_2_0; // 0x48
	::System::Boolean Field_2_1; // 0x50

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_1_6338FD15AFE99D89* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_6338FD15AFE99D89*))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EB077AEDD09ED2BB(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_EB077AEDD09ED2BB_OFFSET))(this, a1);
	}

	::System::Void Method_2_EC99D2266C93F3B8(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_EC99D2266C93F3B8_OFFSET))(this, a1);
	}

	::System::Void Method_2_688186F2055D9272(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_688186F2055D9272_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0E142E3463F30350()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_0E142E3463F30350_OFFSET))(this);
	}

	::System::Void Method_2_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_B768DA94E3FD91D9_OFFSET))(this);
	}

	::System::Void Method_2_1C77BEFB194FCFF1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_1C77BEFB194FCFF1_OFFSET))(this, a1);
	}

	::System::Single Method_2_99131D1892AB4AC7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_99131D1892AB4AC7_OFFSET))(this);
	}

	::System::Single Method_2_8C97CA3BAB7FB2D7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_8C97CA3BAB7FB2D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_793399FBE48890BB(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_793399FBE48890BB_OFFSET))(this, a1);
	}

	::System::Void Method_2_07D7C7513828ED45(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_07D7C7513828ED45_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9509488FE655E8C(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_E9509488FE655E8C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
