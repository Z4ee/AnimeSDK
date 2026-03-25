#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class NodeIndexItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_BINDERINDEX_GETFILENAME_OFFSET UNITYSDK_OFFSET(0x91F3A50)
#define RPG_CLIENT_BINDERINDEX_GETPLAINCOMPONENTBYINDEX_OFFSET UNITYSDK_OFFSET(0x91F3800)
#define RPG_CLIENT_BINDERINDEX_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x91F37B0)
#define RPG_CLIENT_BINDERINDEX_INDEXVALID_OFFSET UNITYSDK_OFFSET(0x91F3750)
#define RPG_CLIENT_BINDERINDEX__CCTOR_OFFSET UNITYSDK_OFFSET(0x91F3B00)
#define RPG_CLIENT_BINDERINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x91F3AC0)

namespace RPG::Client
{
	inline static constexpr unsigned int BinderIndex_TypeDefinitionIndex = 59415;

	class BinderIndex : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_BinderIndexOpen()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BinderIndex_TypeDefinitionIndex)->GetStaticField(0x48F0);
		}
		::System::Collections::Generic::List_1<::RPG::Client::NodeIndexItem*>* binderIndexes; // 0x18
		::System::String* OutputFileName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BINDERINDEX__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BINDERINDEX__CCTOR_OFFSET))();
		}

		::System::Boolean IndexValid(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BINDERINDEX_INDEXVALID_OFFSET))(this, index);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BINDERINDEX_GET_COUNT_OFFSET))(this);
		}

		::UnityEngine::Component* GetPlainComponentByIndex(::System::Int32 index)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BINDERINDEX_GETPLAINCOMPONENTBYINDEX_OFFSET))(this, index);
		}

		::System::String* GetFileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BINDERINDEX_GETFILENAME_OFFSET))(this);
		}
	};
}
