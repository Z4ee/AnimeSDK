#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameTrait; }
namespace RPG::Client { class GridFightTeam; }
namespace RPG::Client { class IGridFightTraitShowEffect; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AE282C084B0DF377_METHOD_1_3E31923C0BE79C06_OFFSET UNITYSDK_OFFSET(0x1440A890)
#define CLASS_1_AE282C084B0DF377_METHOD_1_6F6B3EEB29634602_1_OFFSET UNITYSDK_OFFSET(0x1440B300)
#define CLASS_1_AE282C084B0DF377_METHOD_1_6F6B3EEB29634602_OFFSET UNITYSDK_OFFSET(0x1440A4C0)
#define CLASS_1_AE282C084B0DF377_METHOD_1_9FB9BDFF088D27F4_OFFSET UNITYSDK_OFFSET(0x1440B6E0)
#define CLASS_1_AE282C084B0DF377_METHOD_1_B8F70D152A9F0E96_OFFSET UNITYSDK_OFFSET(0x1440AF60)
#define CLASS_1_AE282C084B0DF377_METHOD_1_CF780FC3D0CB1833_OFFSET UNITYSDK_OFFSET(0x1440A300)
#define CLASS_1_AE282C084B0DF377__CTOR_OFFSET UNITYSDK_OFFSET(0x1440A430)

inline static constexpr unsigned int Class_1_AE282C084B0DF377_TypeDefinitionIndex = 60895;

class Class_1_AE282C084B0DF377 : public ::System::Object
{
public:
	static ::Class_1_AE282C084B0DF377** StaticGet_Field_1_0()
	{
		return (::Class_1_AE282C084B0DF377**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE282C084B0DF377_TypeDefinitionIndex)->GetStaticField(0x3D000);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>*>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE282C084B0DF377__CTOR_OFFSET))(this);
	}

	static ::Class_1_AE282C084B0DF377* Method_1_CF780FC3D0CB1833()
	{
		return ((::Class_1_AE282C084B0DF377*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE282C084B0DF377_METHOD_1_CF780FC3D0CB1833_OFFSET))();
	}

	::System::Void Method_1_6F6B3EEB29634602(::RPG::Client::GridFightTeam* a1, ::RPG::Client::GridFightGameTrait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeam*, ::RPG::Client::GridFightGameTrait*))((::PBYTE)hIl2Cpp + CLASS_1_AE282C084B0DF377_METHOD_1_6F6B3EEB29634602_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6F6B3EEB29634602_1(::RPG::Client::GridFightTeam* a1, ::RPG::Client::GridFightGameTrait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeam*, ::RPG::Client::GridFightGameTrait*))((::PBYTE)hIl2Cpp + CLASS_1_AE282C084B0DF377_METHOD_1_6F6B3EEB29634602_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E31923C0BE79C06(::RPG::Client::GridFightGameTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameTrait*))((::PBYTE)hIl2Cpp + CLASS_1_AE282C084B0DF377_METHOD_1_3E31923C0BE79C06_OFFSET))(this, a1);
	}

	::System::Void Method_1_B8F70D152A9F0E96(::RPG::Client::GridFightTeam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeam*))((::PBYTE)hIl2Cpp + CLASS_1_AE282C084B0DF377_METHOD_1_B8F70D152A9F0E96_OFFSET))(this, a1);
	}

	::System::Void Method_1_9FB9BDFF088D27F4(::System::UInt32 a1, ::RPG::Client::IGridFightTraitShowEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::IGridFightTraitShowEffect*))((::PBYTE)hIl2Cpp + CLASS_1_AE282C084B0DF377_METHOD_1_9FB9BDFF088D27F4_OFFSET))(this, a1, a2);
	}
};
