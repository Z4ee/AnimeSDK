#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6854A6346A56B2FF.h"
#include "unitysdk/RPG/Client/ETravelShipState.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_6338FD15AFE99D89;
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x178F6E80)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_0F50518FAD234661_OFFSET UNITYSDK_OFFSET(0x178F6160)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_1C77BEFB194FCFF1_OFFSET UNITYSDK_OFFSET(0x178F5CF0)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_1F88250D2A4285C4_OFFSET UNITYSDK_OFFSET(0x178F57A0)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_688186F2055D9272_OFFSET UNITYSDK_OFFSET(0x178F6360)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_8C97CA3BAB7FB2D7_OFFSET UNITYSDK_OFFSET(0x178F7330)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_99131D1892AB4AC7_OFFSET UNITYSDK_OFFSET(0x178F7170)
#define CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x178F7020)
#define CLASS_2_58EEDBAFC5C5D1E8__CTOR_OFFSET UNITYSDK_OFFSET(0x178F5720)

inline static constexpr unsigned int Class_2_58EEDBAFC5C5D1E8_TypeDefinitionIndex = 68760;

class Class_2_58EEDBAFC5C5D1E8 : public ::Class_1_6854A6346A56B2FF
{
public:
	::System::Nullable_1<::System::Single> IAEABGOCFCM; // 0x48
	::System::Boolean EKJHPKKDKPI; // 0x50

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_1_6338FD15AFE99D89* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_6338FD15AFE99D89*))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1F88250D2A4285C4(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_1F88250D2A4285C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_0F50518FAD234661(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_2_58EEDBAFC5C5D1E8_METHOD_2_0F50518FAD234661_OFFSET))(this, a1);
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
};
