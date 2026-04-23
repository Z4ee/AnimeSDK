#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginMapImmediatelyFrameCapture; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_09A5B56524A39649_METHOD_2_47EDBC4CA1AB8BEE_OFFSET UNITYSDK_OFFSET(0x11E65980)
#define CLASS_2_09A5B56524A39649_METHOD_2_501ED00350F147ED_OFFSET UNITYSDK_OFFSET(0x11E66090)
#define CLASS_2_09A5B56524A39649_METHOD_2_637DBA7901C3991A_OFFSET UNITYSDK_OFFSET(0x11E65DC0)
#define CLASS_2_09A5B56524A39649_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x11E66170)
#define CLASS_2_09A5B56524A39649_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x11E65910)
#define CLASS_2_09A5B56524A39649_METHOD_2_BAE1C23C3E6356EC_OFFSET UNITYSDK_OFFSET(0x11E65730)
#define CLASS_2_09A5B56524A39649_METHOD_2_BFB00779E460D7A3_OFFSET UNITYSDK_OFFSET(0x11E659D0)
#define CLASS_2_09A5B56524A39649_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x11E65FD0)
#define CLASS_2_09A5B56524A39649_METHOD_2_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0x11E65E10)
#define CLASS_2_09A5B56524A39649_METHOD_2_F708F504BFA7AACA_OFFSET UNITYSDK_OFFSET(0x11E66040)
#define CLASS_2_09A5B56524A39649__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E660F0)
#define CLASS_2_09A5B56524A39649__CTOR_OFFSET UNITYSDK_OFFSET(0x11E660E0)

inline static constexpr unsigned int Class_2_09A5B56524A39649_TypeDefinitionIndex = 64601;

class Class_2_09A5B56524A39649 : public ::RPG::Client::BehaviorBase
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_09A5B56524A39649_TypeDefinitionIndex)->GetStaticField(0x54A30);
	}
	::System::Boolean Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09A5B56524A39649__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_09A5B56524A39649__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_2_BAE1C23C3E6356EC(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_09A5B56524A39649_METHOD_2_BAE1C23C3E6356EC_OFFSET))(a1);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_09A5B56524A39649_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_47EDBC4CA1AB8BEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09A5B56524A39649_METHOD_2_47EDBC4CA1AB8BEE_OFFSET))(this);
	}

	::System::Void Method_2_637DBA7901C3991A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09A5B56524A39649_METHOD_2_637DBA7901C3991A_OFFSET))(this);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_09A5B56524A39649_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_BFB00779E460D7A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09A5B56524A39649_METHOD_2_BFB00779E460D7A3_OFFSET))(this);
	}

	::System::Void Method_2_F206290BA342BA13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09A5B56524A39649_METHOD_2_F206290BA342BA13_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginMapImmediatelyFrameCapture* Method_2_F708F504BFA7AACA()
	{
		return ((::RPG::Client::MonoEffectPluginMapImmediatelyFrameCapture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09A5B56524A39649_METHOD_2_F708F504BFA7AACA_OFFSET))(this);
	}

	::RPG::Client::MonoEffect* Method_2_501ED00350F147ED()
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09A5B56524A39649_METHOD_2_501ED00350F147ED_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_09A5B56524A39649_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
