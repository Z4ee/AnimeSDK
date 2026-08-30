#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class Class_1_5C3804B21DF947F4;
class Class_1_643E8C5145F2D973;
namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }

#define CLASS_1_C8FB696C4B9416C3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x195A6DC0)
#define CLASS_1_C8FB696C4B9416C3_METHOD_1_0E039083B523AF86_OFFSET UNITYSDK_OFFSET(0x195A76A0)
#define CLASS_1_C8FB696C4B9416C3_METHOD_1_2DF0EFFDA2B6622E_OFFSET UNITYSDK_OFFSET(0x195A6F80)
#define CLASS_1_C8FB696C4B9416C3_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x195A6D20)
#define CLASS_1_C8FB696C4B9416C3_METHOD_1_449E738F1766B156_OFFSET UNITYSDK_OFFSET(0x195A7A10)
#define CLASS_1_C8FB696C4B9416C3_METHOD_1_50FC50990C62A5F9_OFFSET UNITYSDK_OFFSET(0x195A6F10)
#define CLASS_1_C8FB696C4B9416C3_METHOD_1_8FABD700A136C931_OFFSET UNITYSDK_OFFSET(0x195A72C0)
#define CLASS_1_C8FB696C4B9416C3_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x195A74C0)
#define CLASS_1_C8FB696C4B9416C3_METHOD_1_C7D56C0F7EADD4B3_OFFSET UNITYSDK_OFFSET(0x195A7020)
#define CLASS_1_C8FB696C4B9416C3__CTOR_OFFSET UNITYSDK_OFFSET(0x195A6CA0)

inline static constexpr unsigned int Class_1_C8FB696C4B9416C3_TypeDefinitionIndex = 68262;

class Class_1_C8FB696C4B9416C3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_643E8C5145F2D973*>* CDDJDLHBFFP; // 0x10
	::UnityEngine::Pooled::PooledList_1<::UnityEngine::Playables::PlayableGraph>* OKPGBBMKBIC; // 0x18
	::Class_1_5C3804B21DF947F4* LGLKJEPJNGL; // 0x20
	::System::Boolean IMEGHKJFFCI; // 0x28
	::System::Boolean KJPIGKGMKFG; // 0x29
	::System::Single JLDIMMHNCFK; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8FB696C4B9416C3__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8FB696C4B9416C3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_50FC50990C62A5F9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C8FB696C4B9416C3_METHOD_1_50FC50990C62A5F9_OFFSET))(this, a1);
	}

	::System::Void Method_1_C7D56C0F7EADD4B3(::RPG::Client::MonoEmoPlayableGraph* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEmoPlayableGraph*))((::PBYTE)hIl2Cpp + CLASS_1_C8FB696C4B9416C3_METHOD_1_C7D56C0F7EADD4B3_OFFSET))(this, a1);
	}

	::System::Void Method_1_8FABD700A136C931(::RPG::Client::MonoEmoPlayableGraph* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEmoPlayableGraph*))((::PBYTE)hIl2Cpp + CLASS_1_C8FB696C4B9416C3_METHOD_1_8FABD700A136C931_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8FB696C4B9416C3_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_2DF0EFFDA2B6622E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C8FB696C4B9416C3_METHOD_1_2DF0EFFDA2B6622E_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E039083B523AF86(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C8FB696C4B9416C3_METHOD_1_0E039083B523AF86_OFFSET))(this, a1);
	}

	::System::Void Method_1_449E738F1766B156(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C8FB696C4B9416C3_METHOD_1_449E738F1766B156_OFFSET))(this, a1);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8FB696C4B9416C3_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}
};
