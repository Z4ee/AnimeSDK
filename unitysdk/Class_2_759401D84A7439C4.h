#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_2_35DC892F466147D4;
class Class_2_460F24561689B584;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_759401D84A7439C4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x128CDAB0)
#define CLASS_2_759401D84A7439C4_METHOD_2_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x128CD980)
#define CLASS_2_759401D84A7439C4_METHOD_2_61500E915B8D2D86_OFFSET UNITYSDK_OFFSET(0x128CDB70)
#define CLASS_2_759401D84A7439C4__CTOR_OFFSET UNITYSDK_OFFSET(0x128CDC10)

inline static constexpr unsigned int Class_2_759401D84A7439C4_TypeDefinitionIndex = 52491;

class Class_2_759401D84A7439C4 : public ::RPG::GameCore::GameComponentBase
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_2_460F24561689B584* Field_2_2; // 0x18
	::Class_2_35DC892F466147D4* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_759401D84A7439C4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_759401D84A7439C4_METHOD_2_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_759401D84A7439C4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_61500E915B8D2D86(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_759401D84A7439C4_METHOD_2_61500E915B8D2D86_OFFSET))(this, a1, a2, a3);
	}
};
