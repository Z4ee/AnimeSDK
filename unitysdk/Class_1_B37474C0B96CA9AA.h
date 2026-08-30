#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameTrait; }
namespace RPG::Client { class GridFightTeam; }
namespace RPG::Client { class IGridFightTraitShowEffect; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B37474C0B96CA9AA_METHOD_1_2CFAD83483748737_1_OFFSET UNITYSDK_OFFSET(0x188878C0)
#define CLASS_1_B37474C0B96CA9AA_METHOD_1_2CFAD83483748737_OFFSET UNITYSDK_OFFSET(0x18885690)
#define CLASS_1_B37474C0B96CA9AA_METHOD_1_3E31923C0BE79C06_OFFSET UNITYSDK_OFFSET(0x18886170)
#define CLASS_1_B37474C0B96CA9AA_METHOD_1_9FB9BDFF088D27F4_OFFSET UNITYSDK_OFFSET(0x188883C0)
#define CLASS_1_B37474C0B96CA9AA_METHOD_1_CF780FC3D0CB1833_OFFSET UNITYSDK_OFFSET(0x188854D0)
#define CLASS_1_B37474C0B96CA9AA_METHOD_1_E53524BC9E187933_OFFSET UNITYSDK_OFFSET(0x18886E20)
#define CLASS_1_B37474C0B96CA9AA__CTOR_OFFSET UNITYSDK_OFFSET(0x18885600)

inline static constexpr unsigned int Class_1_B37474C0B96CA9AA_TypeDefinitionIndex = 65193;

class Class_1_B37474C0B96CA9AA : public ::System::Object
{
public:
	static ::Class_1_B37474C0B96CA9AA** StaticGet_FLMODBLFAGD()
	{
		return (::Class_1_B37474C0B96CA9AA**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B37474C0B96CA9AA_TypeDefinitionIndex)->GetStaticField(0x539B0);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>*>* CBHLKGEDNCN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B37474C0B96CA9AA__CTOR_OFFSET))(this);
	}

	static ::Class_1_B37474C0B96CA9AA* Method_1_CF780FC3D0CB1833()
	{
		return ((::Class_1_B37474C0B96CA9AA*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B37474C0B96CA9AA_METHOD_1_CF780FC3D0CB1833_OFFSET))();
	}

	::System::Void Method_1_2CFAD83483748737(::RPG::Client::GridFightTeam* a1, ::RPG::Client::GridFightGameTrait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeam*, ::RPG::Client::GridFightGameTrait*))((::PBYTE)hIl2Cpp + CLASS_1_B37474C0B96CA9AA_METHOD_1_2CFAD83483748737_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2CFAD83483748737_1(::RPG::Client::GridFightTeam* a1, ::RPG::Client::GridFightGameTrait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeam*, ::RPG::Client::GridFightGameTrait*))((::PBYTE)hIl2Cpp + CLASS_1_B37474C0B96CA9AA_METHOD_1_2CFAD83483748737_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E31923C0BE79C06(::RPG::Client::GridFightGameTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameTrait*))((::PBYTE)hIl2Cpp + CLASS_1_B37474C0B96CA9AA_METHOD_1_3E31923C0BE79C06_OFFSET))(this, a1);
	}

	::System::Void Method_1_E53524BC9E187933(::RPG::Client::GridFightTeam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeam*))((::PBYTE)hIl2Cpp + CLASS_1_B37474C0B96CA9AA_METHOD_1_E53524BC9E187933_OFFSET))(this, a1);
	}

	::System::Void Method_1_9FB9BDFF088D27F4(::System::UInt32 a1, ::RPG::Client::IGridFightTraitShowEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::IGridFightTraitShowEffect*))((::PBYTE)hIl2Cpp + CLASS_1_B37474C0B96CA9AA_METHOD_1_9FB9BDFF088D27F4_OFFSET))(this, a1, a2);
	}
};
