#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameTrait; }
namespace RPG::Client { class GridFightTeam; }
namespace RPG::Client { class IGridFightTraitShowEffect; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E860C85693D93CD2_METHOD_1_042B3D2164220DDD_OFFSET UNITYSDK_OFFSET(0x936E6B0)
#define CLASS_1_E860C85693D93CD2_METHOD_1_3B71486F07E29A66_OFFSET UNITYSDK_OFFSET(0x936D660)
#define CLASS_1_E860C85693D93CD2_METHOD_1_9D919FDA443A4D04_1_OFFSET UNITYSDK_OFFSET(0x936E1F0)
#define CLASS_1_E860C85693D93CD2_METHOD_1_9D919FDA443A4D04_OFFSET UNITYSDK_OFFSET(0x936D1A0)
#define CLASS_1_E860C85693D93CD2_METHOD_1_CF780FC3D0CB1833_OFFSET UNITYSDK_OFFSET(0x936CFE0)
#define CLASS_1_E860C85693D93CD2_METHOD_1_DA023B03FB2C7224_OFFSET UNITYSDK_OFFSET(0x936DDE0)
#define CLASS_1_E860C85693D93CD2__CTOR_OFFSET UNITYSDK_OFFSET(0x936D110)

inline static constexpr unsigned int Class_1_E860C85693D93CD2_TypeDefinitionIndex = 59960;

class Class_1_E860C85693D93CD2 : public ::System::Object
{
public:
	static ::Class_1_E860C85693D93CD2** StaticGet_Field_1_0()
	{
		return (::Class_1_E860C85693D93CD2**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E860C85693D93CD2_TypeDefinitionIndex)->GetStaticField(0x6ADB0);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>*>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E860C85693D93CD2__CTOR_OFFSET))(this);
	}

	static ::Class_1_E860C85693D93CD2* Method_1_CF780FC3D0CB1833()
	{
		return ((::Class_1_E860C85693D93CD2*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E860C85693D93CD2_METHOD_1_CF780FC3D0CB1833_OFFSET))();
	}

	::System::Void Method_1_9D919FDA443A4D04(::RPG::Client::GridFightTeam* a1, ::RPG::Client::GridFightGameTrait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeam*, ::RPG::Client::GridFightGameTrait*))((::PBYTE)hIl2Cpp + CLASS_1_E860C85693D93CD2_METHOD_1_9D919FDA443A4D04_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D919FDA443A4D04_1(::RPG::Client::GridFightTeam* a1, ::RPG::Client::GridFightGameTrait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeam*, ::RPG::Client::GridFightGameTrait*))((::PBYTE)hIl2Cpp + CLASS_1_E860C85693D93CD2_METHOD_1_9D919FDA443A4D04_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3B71486F07E29A66(::RPG::Client::GridFightGameTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameTrait*))((::PBYTE)hIl2Cpp + CLASS_1_E860C85693D93CD2_METHOD_1_3B71486F07E29A66_OFFSET))(this, a1);
	}

	::System::Void Method_1_DA023B03FB2C7224(::RPG::Client::GridFightTeam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeam*))((::PBYTE)hIl2Cpp + CLASS_1_E860C85693D93CD2_METHOD_1_DA023B03FB2C7224_OFFSET))(this, a1);
	}

	::System::Void Method_1_042B3D2164220DDD(::System::UInt32 a1, ::RPG::Client::IGridFightTraitShowEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::IGridFightTraitShowEffect*))((::PBYTE)hIl2Cpp + CLASS_1_E860C85693D93CD2_METHOD_1_042B3D2164220DDD_OFFSET))(this, a1, a2);
	}
};
