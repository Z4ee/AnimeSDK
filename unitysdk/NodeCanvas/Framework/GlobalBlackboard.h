#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Blackboard.h"
#include "unitysdk/NodeCanvas/Framework/GlobalBlackboard_SingletonMode.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_CREATE_OFFSET UNITYSDK_OFFSET(0x1EB768D0)
#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_FIND_OFFSET UNITYSDK_OFFSET(0x1EB76990)
#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_GETALL_OFFSET UNITYSDK_OFFSET(0x1EB76870)
#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1EB76840)
#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1EB76860)
#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_GET_UID_OFFSET UNITYSDK_OFFSET(0x1EB76850)
#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_ISPREFABASSET_OFFSET UNITYSDK_OFFSET(0x1EB76E60)
#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1EB76E70)
#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EB76A60)
#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1EB76F00)
#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB773E0)
#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB774C0)
#define NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB773F0)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int GlobalBlackboard_TypeDefinitionIndex = 31035;

	class GlobalBlackboard : public ::NodeCanvas::Framework::Blackboard
	{
	public:
		static ::System::Collections::Generic::List_1<::NodeCanvas::Framework::GlobalBlackboard*>** StaticGet__allGlobals()
		{
			return (::System::Collections::Generic::List_1<::NodeCanvas::Framework::GlobalBlackboard*>**)Il2CppClass::FromTypeDefinitionIndex(GlobalBlackboard_TypeDefinitionIndex)->GetStaticField(0x25A10);
		}
		::System::String* _UID; // 0x58
		::System::String* _identifier; // 0x60
		::NodeCanvas::Framework::GlobalBlackboard_SingletonMode _singletonMode; // 0x68
		::System::Boolean _dontDestroyOnLoad; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD__CCTOR_OFFSET))();
		}

		::System::String* get_identifier()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::String* get_UID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_GET_UID_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_GET_NAME_OFFSET))(this);
		}

		static ::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::GlobalBlackboard*>* GetAll()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::GlobalBlackboard*>*(*)())((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_GETALL_OFFSET))();
		}

		static ::NodeCanvas::Framework::GlobalBlackboard* Create()
		{
			return ((::NodeCanvas::Framework::GlobalBlackboard*(*)())((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_CREATE_OFFSET))();
		}

		static ::NodeCanvas::Framework::GlobalBlackboard* Find(::System::String* name)
		{
			return ((::NodeCanvas::Framework::GlobalBlackboard*(*)(::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_FIND_OFFSET))(name);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_ONVALIDATE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_TOSTRING_OFFSET))(this);
		}

		::System::Boolean IsPrefabAsset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GLOBALBLACKBOARD_ISPREFABASSET_OFFSET))(this);
		}
	};
}
