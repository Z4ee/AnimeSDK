#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_91A4E66FC5A57602;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_67AC247E5B257456__CTOR_OFFSET UNITYSDK_OFFSET(0xBD04FF0)

inline static constexpr unsigned int Class_1_67AC247E5B257456_TypeDefinitionIndex = 47522;

class Class_1_67AC247E5B257456 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* DNPGLFKBAGE; // 0x10
	::System::Collections::Generic::IList_1<::Class_1_91A4E66FC5A57602*>* NIFEJPCFBDM; // 0x18
	::System::UInt32 HEGLPPNAHAE; // 0x20

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_67AC247E5B257456__CTOR_OFFSET))(this, a1);
	}
};
