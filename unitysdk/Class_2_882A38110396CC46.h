#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_882A38110396CC46_METHOD_2_100843C949699661_OFFSET UNITYSDK_OFFSET(0xB6E4B60)
#define CLASS_2_882A38110396CC46_METHOD_2_3FCB09BFD69BF82D_OFFSET UNITYSDK_OFFSET(0xB6E5060)
#define CLASS_2_882A38110396CC46_METHOD_2_451DBA75CB9DEDB2_OFFSET UNITYSDK_OFFSET(0xB6E4CA0)
#define CLASS_2_882A38110396CC46_METHOD_2_47EA6FBF18D3D786_OFFSET UNITYSDK_OFFSET(0xB6E52E0)
#define CLASS_2_882A38110396CC46_METHOD_2_7A1974D6F20052E2_OFFSET UNITYSDK_OFFSET(0xB6E4F30)
#define CLASS_2_882A38110396CC46_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xB6E5110)
#define CLASS_2_882A38110396CC46_METHOD_2_EB51D0D9C8C05E4A_OFFSET UNITYSDK_OFFSET(0xB6E4D20)
#define CLASS_2_882A38110396CC46__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB6E5200)
#define CLASS_2_882A38110396CC46__CTOR_OFFSET UNITYSDK_OFFSET(0xB6E5420)

inline static constexpr unsigned int Class_2_882A38110396CC46_TypeDefinitionIndex = 63824;

class Class_2_882A38110396CC46 : public ::RPG::Client::BaseModule
{
public:
	// static const ::System::String* LCNEFNJNBLE; // 0x0
	// static const ::System::String* MJPNONDNNCM; // 0x0
	// static const ::System::String* CILPDGGHPCO; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* GDOBDJIELPD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* DIICJGAAJCA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_882A38110396CC46__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_100843C949699661(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_882A38110396CC46_METHOD_2_100843C949699661_OFFSET))(this, a1);
	}

	::System::String* Method_2_451DBA75CB9DEDB2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_882A38110396CC46_METHOD_2_451DBA75CB9DEDB2_OFFSET))(this, a1);
	}

	::System::String* Method_2_EB51D0D9C8C05E4A(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_2_882A38110396CC46_METHOD_2_EB51D0D9C8C05E4A_OFFSET))(this, a1);
	}

	::System::Void Method_2_7A1974D6F20052E2(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_882A38110396CC46_METHOD_2_7A1974D6F20052E2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_3FCB09BFD69BF82D(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_882A38110396CC46_METHOD_2_3FCB09BFD69BF82D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_882A38110396CC46_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void _AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_882A38110396CC46__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_47EA6FBF18D3D786(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_882A38110396CC46_METHOD_2_47EA6FBF18D3D786_OFFSET))(this, a1, a2);
	}
};
