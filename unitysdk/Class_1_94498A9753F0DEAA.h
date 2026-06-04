#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class Class_1_5C3804B21DF947F4;
class Class_1_643E8C5145F2D973;
namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }

#define CLASS_1_94498A9753F0DEAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA607420)
#define CLASS_1_94498A9753F0DEAA_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA607380)
#define CLASS_1_94498A9753F0DEAA_METHOD_1_449E738F1766B156_OFFSET UNITYSDK_OFFSET(0xA608190)
#define CLASS_1_94498A9753F0DEAA_METHOD_1_817318C744BE409A_OFFSET UNITYSDK_OFFSET(0xA6075E0)
#define CLASS_1_94498A9753F0DEAA_METHOD_1_8FABD700A136C931_OFFSET UNITYSDK_OFFSET(0xA607920)
#define CLASS_1_94498A9753F0DEAA_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xA607B20)
#define CLASS_1_94498A9753F0DEAA_METHOD_1_C7D56C0F7EADD4B3_OFFSET UNITYSDK_OFFSET(0xA607680)
#define CLASS_1_94498A9753F0DEAA_METHOD_1_CEB0AC426B3FC6F6_OFFSET UNITYSDK_OFFSET(0xA607D20)
#define CLASS_1_94498A9753F0DEAA_METHOD_1_DBF9DAFBB92C56EA_OFFSET UNITYSDK_OFFSET(0xA607570)
#define CLASS_1_94498A9753F0DEAA__CTOR_OFFSET UNITYSDK_OFFSET(0xA607300)

inline static constexpr unsigned int Class_1_94498A9753F0DEAA_TypeDefinitionIndex = 63879;

class Class_1_94498A9753F0DEAA : public ::System::Object
{
public:
	::Class_1_5C3804B21DF947F4* Field_1_0; // 0x10
	::UnityEngine::Pooled::PooledList_1<::UnityEngine::Playables::PlayableGraph>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_643E8C5145F2D973*>* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x29
	::System::Single Field_1_5; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94498A9753F0DEAA__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94498A9753F0DEAA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_DBF9DAFBB92C56EA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_94498A9753F0DEAA_METHOD_1_DBF9DAFBB92C56EA_OFFSET))(this, a1);
	}

	::System::Void Method_1_C7D56C0F7EADD4B3(::RPG::Client::MonoEmoPlayableGraph* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEmoPlayableGraph*))((::PBYTE)hIl2Cpp + CLASS_1_94498A9753F0DEAA_METHOD_1_C7D56C0F7EADD4B3_OFFSET))(this, a1);
	}

	::System::Void Method_1_8FABD700A136C931(::RPG::Client::MonoEmoPlayableGraph* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEmoPlayableGraph*))((::PBYTE)hIl2Cpp + CLASS_1_94498A9753F0DEAA_METHOD_1_8FABD700A136C931_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94498A9753F0DEAA_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_817318C744BE409A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_94498A9753F0DEAA_METHOD_1_817318C744BE409A_OFFSET))(this, a1);
	}

	::System::Void Method_1_CEB0AC426B3FC6F6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_94498A9753F0DEAA_METHOD_1_CEB0AC426B3FC6F6_OFFSET))(this, a1);
	}

	::System::Void Method_1_449E738F1766B156(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_94498A9753F0DEAA_METHOD_1_449E738F1766B156_OFFSET))(this, a1);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94498A9753F0DEAA_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}
};
