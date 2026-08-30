#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_67AC247E5B257456;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_91A4E66FC5A57602__CTOR_OFFSET UNITYSDK_OFFSET(0x1847F610)

inline static constexpr unsigned int Class_1_91A4E66FC5A57602_TypeDefinitionIndex = 47523;

class Class_1_91A4E66FC5A57602 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_67AC247E5B257456*>* NBBLDEMCCGN; // 0x10
	::System::UInt32 LLDCHLHNADA; // 0x18
	::System::Boolean GPDAOCJAIGE; // 0x1C

	::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_91A4E66FC5A57602__CTOR_OFFSET))(this, a1, a2);
	}
};
