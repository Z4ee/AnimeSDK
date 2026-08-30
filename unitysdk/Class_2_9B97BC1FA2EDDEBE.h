#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/RogueTitanType.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class RogueTournTitanTypeRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_9B97BC1FA2EDDEBE_METHOD_2_047914517574764A_OFFSET UNITYSDK_OFFSET(0x12E8B010)
#define CLASS_2_9B97BC1FA2EDDEBE_METHOD_2_1CBB0D1F7AEE7F0E_OFFSET UNITYSDK_OFFSET(0x12E8AFB0)
#define CLASS_2_9B97BC1FA2EDDEBE_METHOD_2_2D7EF60D795B28AE_OFFSET UNITYSDK_OFFSET(0x12E8A920)
#define CLASS_2_9B97BC1FA2EDDEBE_METHOD_2_BDED79D5C4FAAACD_OFFSET UNITYSDK_OFFSET(0x12E8B370)
#define CLASS_2_9B97BC1FA2EDDEBE_METHOD_2_BF9C25E762BD53B3_OFFSET UNITYSDK_OFFSET(0x12E8A860)
#define CLASS_2_9B97BC1FA2EDDEBE__CCTOR_OFFSET UNITYSDK_OFFSET(0x12E8B4A0)
#define CLASS_2_9B97BC1FA2EDDEBE__CTOR_OFFSET UNITYSDK_OFFSET(0x12E8B450)
#define CLASS_2_9B97BC1FA2EDDEBE__ONBIND_OFFSET UNITYSDK_OFFSET(0x12E8A780)

inline static constexpr unsigned int Class_2_9B97BC1FA2EDDEBE_TypeDefinitionIndex = 72251;

class Class_2_9B97BC1FA2EDDEBE : public ::Class_1_34917908B7833130
{
public:
	static ::System::Int32* StaticGet_PAFPPCAMLDF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_9B97BC1FA2EDDEBE_TypeDefinitionIndex)->GetStaticField(0x13040);
	}
	static ::System::Int32* StaticGet_HEFPDOBFKGF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_9B97BC1FA2EDDEBE_TypeDefinitionIndex)->GetStaticField(0x13044);
	}
	static ::System::Int32* StaticGet_NLGNEJMAGIG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_9B97BC1FA2EDDEBE_TypeDefinitionIndex)->GetStaticField(0x13048);
	}
	::System::Collections::Generic::HashSet_1<::System::UInt32>* MPBEGICPCAI; // 0x60
	::UnityEngine::UI::Image* HPCAJDKDMEI; // 0x68
	::UnityEngine::Animator* APPGGMLEPLN; // 0x70
	::RPG::Client::LocalizedText* DLNBAPDCFLI; // 0x78
	::RPG::GameCore::RogueTitanType EOPLFIBLPHF; // 0x80
	::System::Boolean FMNEEONAMNO; // 0x84
	::System::UInt32 IACHHFMCKMC; // 0x88

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
