#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_54BFC42EE1AA3AAF_CLEAR_OFFSET UNITYSDK_OFFSET(0xACD6CC0)
#define CLASS_2_54BFC42EE1AA3AAF_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xACD6D60)
#define CLASS_2_54BFC42EE1AA3AAF_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xACD6D10)
#define CLASS_2_54BFC42EE1AA3AAF_METHOD_2_AE395979358CE0CE_OFFSET UNITYSDK_OFFSET(0xACD6C40)
#define CLASS_2_54BFC42EE1AA3AAF__CTOR_OFFSET UNITYSDK_OFFSET(0xACD6DB0)
#define CLASS_2_54BFC42EE1AA3AAF___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xACD6DC0)

inline static constexpr unsigned int Class_2_54BFC42EE1AA3AAF_TypeDefinitionIndex = 50534;

class Class_2_54BFC42EE1AA3AAF : public ::Class_1_BF7A075734D15E98
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_2_1; // 0x20
	::RPG::GameCore::GameEntity* Field_2_2; // 0x28
	::RPG::GameCore::FixPoint Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54BFC42EE1AA3AAF__CTOR_OFFSET))(this);
	}

	::Class_2_54BFC42EE1AA3AAF* Method_2_AE395979358CE0CE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::Class_2_54BFC42EE1AA3AAF*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::System::String*>*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_54BFC42EE1AA3AAF_METHOD_2_AE395979358CE0CE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54BFC42EE1AA3AAF_CLEAR_OFFSET))(this);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54BFC42EE1AA3AAF_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54BFC42EE1AA3AAF_GETEVENTTYPE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54BFC42EE1AA3AAF___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
