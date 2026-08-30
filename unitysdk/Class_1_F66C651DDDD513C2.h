#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraDuelStatusConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F66C651DDDD513C2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C757450)

inline static constexpr unsigned int Class_1_F66C651DDDD513C2_TypeDefinitionIndex = 40371;

class Class_1_F66C651DDDD513C2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::ChimeraDuelStatusConfig*>* IHHGAJBBMDB; // 0x10
	::System::Int32 CKHEEJLAAJB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F66C651DDDD513C2__CTOR_OFFSET))(this);
	}
};
