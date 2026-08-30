#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingFesItemConfig; }
namespace RPG::GameCore { class ChenLingFesPosition; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FDADBACCDB81CB2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C51F790)

inline static constexpr unsigned int Class_1_FDADBACCDB81CB2D_TypeDefinitionIndex = 42075;

class Class_1_FDADBACCDB81CB2D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* AJPFKOLEMOL; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* CHFEJBFFPLD; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* KEMEPBIGIAE; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* OJFFPIIKPDJ; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* AACDGMCNIDL; // 0x30
	::RPG::GameCore::ChenLingFesItemConfig* EABKOHGCHFP; // 0x38
	::RPG::GameCore::ChenLingFesPosition* FOCNBOANONM; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* KNNMFKMCKBP; // 0x48
	::System::Single ICONGDFLKIP; // 0x50
	::System::Single PLFMKDOCPLP; // 0x54
	::System::Single EEGAODGBDJF; // 0x58
	::System::Single IKFHADBJEOC; // 0x5C
	::System::UInt32 PHFMCACHFIJ; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDADBACCDB81CB2D__CTOR_OFFSET))(this);
	}
};
