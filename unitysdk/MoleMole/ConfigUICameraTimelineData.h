#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_FDE7745895ECBB7E.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUICAMERATIMELINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16B547E0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICameraTimelineData_TypeDefinitionIndex = 44896;

	class ConfigUICameraTimelineData : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::Enum_3_FDE7745895ECBB7E timelineType; // 0x58
		::System::Collections::Generic::List_1<::System::String*>* timelineSequence; // 0x60
		::System::Int32 endTransitionID; // 0x68
		::System::Boolean hideOvernightArea; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICAMERATIMELINEDATA__CTOR_OFFSET))(this);
		}
	};
}
