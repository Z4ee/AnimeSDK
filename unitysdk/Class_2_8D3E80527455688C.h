#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginFrameCapture; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_8D3E80527455688C_METHOD_2_01237CA99C79931A_OFFSET UNITYSDK_OFFSET(0x159225A0)
#define CLASS_2_8D3E80527455688C_METHOD_2_1E78778740C9018B_OFFSET UNITYSDK_OFFSET(0x15922CD0)
#define CLASS_2_8D3E80527455688C_METHOD_2_1F600059BFC04D4A_OFFSET UNITYSDK_OFFSET(0x159230A0)
#define CLASS_2_8D3E80527455688C_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x15922FD0)
#define CLASS_2_8D3E80527455688C_METHOD_2_3BEE750D88C8D903_OFFSET UNITYSDK_OFFSET(0x159225F0)
#define CLASS_2_8D3E80527455688C_METHOD_2_88538744D2B9DAD5_OFFSET UNITYSDK_OFFSET(0x15923030)
#define CLASS_2_8D3E80527455688C_METHOD_2_9A4DCB2B4ADEB8A9_OFFSET UNITYSDK_OFFSET(0x15922C80)
#define CLASS_2_8D3E80527455688C_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x15922530)
#define CLASS_2_8D3E80527455688C_METHOD_2_BAE1C23C3E6356EC_OFFSET UNITYSDK_OFFSET(0x15922360)
#define CLASS_2_8D3E80527455688C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15923130)
#define CLASS_2_8D3E80527455688C__CTOR_OFFSET UNITYSDK_OFFSET(0x15923120)

inline static constexpr unsigned int Class_2_8D3E80527455688C_TypeDefinitionIndex = 70036;

class Class_2_8D3E80527455688C : public ::RPG::Client::BehaviorBase
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_LFDEADJEJPD()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8D3E80527455688C_TypeDefinitionIndex)->GetStaticField(0x5F8C0);
	}
	::System::Boolean NGLHFGMFJLP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D3E80527455688C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8D3E80527455688C__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_2_BAE1C23C3E6356EC(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8D3E80527455688C_METHOD_2_BAE1C23C3E6356EC_OFFSET))(a1);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_8D3E80527455688C_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_01237CA99C79931A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D3E80527455688C_METHOD_2_01237CA99C79931A_OFFSET))(this);
	}

	::System::Void Method_2_9A4DCB2B4ADEB8A9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D3E80527455688C_METHOD_2_9A4DCB2B4ADEB8A9_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8D3E80527455688C_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BEE750D88C8D903(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8D3E80527455688C_METHOD_2_3BEE750D88C8D903_OFFSET))(this, a1);
	}

	::System::Void Method_2_1E78778740C9018B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D3E80527455688C_METHOD_2_1E78778740C9018B_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginFrameCapture* Method_2_88538744D2B9DAD5()
	{
		return ((::RPG::Client::MonoEffectPluginFrameCapture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D3E80527455688C_METHOD_2_88538744D2B9DAD5_OFFSET))(this);
	}

	::RPG::Client::MonoEffect* Method_2_1F600059BFC04D4A()
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D3E80527455688C_METHOD_2_1F600059BFC04D4A_OFFSET))(this);
	}
};
