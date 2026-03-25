#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_2_460F24561689B584;
class Class_2_82B8394520564A54;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_5BB158D06B74BE4B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10640140)
#define CLASS_2_5BB158D06B74BE4B_METHOD_2_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x1063FFF0)
#define CLASS_2_5BB158D06B74BE4B_METHOD_2_D03D3B7704AFEC35_OFFSET UNITYSDK_OFFSET(0x10640230)
#define CLASS_2_5BB158D06B74BE4B__CTOR_OFFSET UNITYSDK_OFFSET(0x106402D0)

inline static constexpr unsigned int Class_2_5BB158D06B74BE4B_TypeDefinitionIndex = 45833;

class Class_2_5BB158D06B74BE4B : public ::RPG::GameCore::GameComponentBase
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_2_82B8394520564A54* Field_2_1; // 0x18
	::Class_2_460F24561689B584* Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BB158D06B74BE4B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BB158D06B74BE4B_METHOD_2_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BB158D06B74BE4B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_D03D3B7704AFEC35(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5BB158D06B74BE4B_METHOD_2_D03D3B7704AFEC35_OFFSET))(this, a1, a2, a3);
	}
};
