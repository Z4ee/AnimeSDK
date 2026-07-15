#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/RogueTitanType.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class RogueTournTitanTypeRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_9B97BC1FA2EDDEBE_METHOD_2_047914517574764A_OFFSET UNITYSDK_OFFSET(0x15DE1170)
#define CLASS_2_9B97BC1FA2EDDEBE_METHOD_2_1CBB0D1F7AEE7F0E_OFFSET UNITYSDK_OFFSET(0x15DE1110)
#define CLASS_2_9B97BC1FA2EDDEBE_METHOD_2_2D7EF60D795B28AE_OFFSET UNITYSDK_OFFSET(0x15DE0A80)
#define CLASS_2_9B97BC1FA2EDDEBE_METHOD_2_BDED79D5C4FAAACD_OFFSET UNITYSDK_OFFSET(0x15DE14D0)
#define CLASS_2_9B97BC1FA2EDDEBE_METHOD_2_BF9C25E762BD53B3_OFFSET UNITYSDK_OFFSET(0x15DE09C0)
#define CLASS_2_9B97BC1FA2EDDEBE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DE1600)
#define CLASS_2_9B97BC1FA2EDDEBE__CTOR_OFFSET UNITYSDK_OFFSET(0x15DE15B0)
#define CLASS_2_9B97BC1FA2EDDEBE__ONBIND_OFFSET UNITYSDK_OFFSET(0x15DE08E0)

inline static constexpr unsigned int Class_2_9B97BC1FA2EDDEBE_TypeDefinitionIndex = 69051;

class Class_2_9B97BC1FA2EDDEBE : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_9B97BC1FA2EDDEBE_TypeDefinitionIndex)->GetStaticField(0x4730);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_9B97BC1FA2EDDEBE_TypeDefinitionIndex)->GetStaticField(0x4734);
	}
	static ::System::Int32* StaticGet_Field_2_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_9B97BC1FA2EDDEBE_TypeDefinitionIndex)->GetStaticField(0x4738);
	}
	::UnityEngine::UI::Image* Field_2_3; // 0x60
	::UnityEngine::Animator* Field_2_4; // 0x68
	::RPG::Client::LocalizedText* Field_2_5; // 0x70
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_6; // 0x78
	::System::Boolean Field_2_7; // 0x80
	::RPG::GameCore::RogueTitanType Field_2_8; // 0x84
	::System::UInt32 Field_2_9; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B97BC1FA2EDDEBE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9B97BC1FA2EDDEBE__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B97BC1FA2EDDEBE__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BF9C25E762BD53B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B97BC1FA2EDDEBE_METHOD_2_BF9C25E762BD53B3_OFFSET))(this);
	}

	::System::Void Method_2_2D7EF60D795B28AE(::RPG::GameCore::RogueTitanType a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTitanType, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_9B97BC1FA2EDDEBE_METHOD_2_2D7EF60D795B28AE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_BDED79D5C4FAAACD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9B97BC1FA2EDDEBE_METHOD_2_BDED79D5C4FAAACD_OFFSET))(this, a1);
	}

	::System::Void Method_2_047914517574764A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9B97BC1FA2EDDEBE_METHOD_2_047914517574764A_OFFSET))(this, a1);
	}

	::RPG::GameCore::RogueTournTitanTypeRow* Method_2_1CBB0D1F7AEE7F0E()
	{
		return ((::RPG::GameCore::RogueTournTitanTypeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B97BC1FA2EDDEBE_METHOD_2_1CBB0D1F7AEE7F0E_OFFSET))(this);
	}
};
