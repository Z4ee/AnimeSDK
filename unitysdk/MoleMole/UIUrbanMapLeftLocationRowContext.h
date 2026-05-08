#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_1685EC66FBD28897;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIURBANMAPLEFTLOCATIONROWCONTEXT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x14DDB500)
#define MOLEMOLE_UIURBANMAPLEFTLOCATIONROWCONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0x14DDB450)
#define MOLEMOLE_UIURBANMAPLEFTLOCATIONROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14DDB660)
#define MOLEMOLE_UIURBANMAPLEFTLOCATIONROWCONTEXT___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x14DDB670)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapLeftLocationRowContext_TypeDefinitionIndex = 73892;

	class UIUrbanMapLeftLocationRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Title; // 0x28
		::System::Action_1<::MoleMole::UIUrbanMapLeftLocationRowContext*>* OnClick; // 0x30
		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* ItemList; // 0x38
		::System::Func_2<::MoleMole::UIUrbanMapLeftLocationRowContext*, ::System::Boolean>* IsLock; // 0x40
		::System::Func_2<::MoleMole::UIUrbanMapLeftLocationRowContext*, ::System::Boolean>* PlayerInFlag; // 0x48
		::System::Func_2<::MoleMole::UIUrbanMapLeftLocationRowContext*, ::Foundation::AssetPath>* Icon; // 0x50
		::System::Func_2<::MoleMole::UIUrbanMapLeftLocationRowContext*, ::System::Boolean>* CurrentSelectFlag; // 0x58
		::System::Action* OnClickClose; // 0x60
		::System::Int32 LeftNum; // 0x68
		::System::Int32 SpecialId; // 0x6C
		::System::Boolean IsEmpty; // 0x70
		::System::Boolean IsFinish; // 0x71
		::System::Boolean IsSimpleTitleMode; // 0x72
		::System::Int32 RightNum; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTLOCATIONROWCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::MoleMole::UIUrbanMapLeftLocationRowContext* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTLOCATIONROWCONTEXT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTLOCATIONROWCONTEXT_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTLOCATIONROWCONTEXT___BASE_EQUALS_OFFSET))(this, P0);
		}
	};
}
