#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingFesItemConfig; }
namespace RPG::GameCore { class ChenLingFesPosition; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FDADBACCDB81CB2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA2FE30)

inline static constexpr unsigned int Class_1_FDADBACCDB81CB2D_TypeDefinitionIndex = 43717;

class Class_1_FDADBACCDB81CB2D : public ::System::Object
{
public:
	::RPG::GameCore::ChenLingFesItemConfig* EABKOHGCHFP; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* OJFFPIIKPDJ; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* AACDGMCNIDL; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* KEMEPBIGIAE; // 0x28
	::RPG::GameCore::ChenLingFesPosition* FOCNBOANONM; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* CHFEJBFFPLD; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* KNNMFKMCKBP; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* AJPFKOLEMOL; // 0x48
	::System::Single PLFMKDOCPLP; // 0x50
	::System::Single IKFHADBJEOC; // 0x54
	::System::UInt32 PHFMCACHFIJ; // 0x58
	::System::Single EEGAODGBDJF; // 0x5C
	::System::Single ICONGDFLKIP; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDADBACCDB81CB2D__CTOR_OFFSET))(this);
	}
};
