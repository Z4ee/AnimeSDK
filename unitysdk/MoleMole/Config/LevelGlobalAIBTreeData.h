#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_LEVELGLOBALAIBTREEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x186C2FC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelGlobalAIBTreeData_TypeDefinitionIndex = 41557;

	class LevelGlobalAIBTreeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* BTreeGlobalIntItems; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* BTreeGlobalFloatItems; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* BTreeGlobalBoolItems; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* BTreeGlobalStringItems; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAIBTREEDATA__CTOR_OFFSET))(this);
		}
	};
}
