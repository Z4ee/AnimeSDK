#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BubbleGraphStruct.h"
#include "unitysdk/System/Object.h"

class Class_3_1A345EAE5F749316_44;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BUBBLEGROUPPLAYGRAPHCONTENT_CLONE_OFFSET UNITYSDK_OFFSET(0x134D3CB0)
#define MOLEMOLE_BUBBLEGROUPPLAYGRAPHCONTENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x134D3D50)
#define MOLEMOLE_BUBBLEGROUPPLAYGRAPHCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x134D3D40)

namespace MoleMole
{
	inline static constexpr unsigned int BubbleGroupPlayGraphContent_TypeDefinitionIndex = 49954;

	class BubbleGroupPlayGraphContent : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::BubbleGraphStruct>* bubbleList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUBBLEGROUPPLAYGRAPHCONTENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Class_3_1A345EAE5F749316_44* protoCli)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_1A345EAE5F749316_44*))((::PBYTE)hIl2Cpp + MOLEMOLE_BUBBLEGROUPPLAYGRAPHCONTENT__CTOR_1_OFFSET))(this, protoCli);
		}

		static ::MoleMole::BubbleGroupPlayGraphContent* Clone(::MoleMole::BubbleGroupPlayGraphContent* other)
		{
			return ((::MoleMole::BubbleGroupPlayGraphContent*(*)(::MoleMole::BubbleGroupPlayGraphContent*))((::PBYTE)hIl2Cpp + MOLEMOLE_BUBBLEGROUPPLAYGRAPHCONTENT_CLONE_OFFSET))(other);
		}
	};
}
