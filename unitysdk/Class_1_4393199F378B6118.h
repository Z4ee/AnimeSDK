#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_16783D700FF01CF4;
namespace RPG::GameCore { class LittleGameNavConnectInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4393199F378B6118__CTOR_OFFSET UNITYSDK_OFFSET(0x1629ED50)

inline static constexpr unsigned int Class_1_4393199F378B6118_TypeDefinitionIndex = 64283;

class Class_1_4393199F378B6118 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_16783D700FF01CF4*>* MPJAHMKIICB; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* BPAPIPLLAGE; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::LittleGameNavConnectInfo*>* CDDNKJLBNLK; // 0x20
	::System::UInt32 PHFMCACHFIJ; // 0x28
	::System::UInt32 LLDCHLHNADA; // 0x2C
	::System::UInt32 GDBJDAOOCOH; // 0x30
	::System::Single FMCAINKKPCL; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4393199F378B6118__CTOR_OFFSET))(this);
	}
};
