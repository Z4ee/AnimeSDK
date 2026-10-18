#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"

class Class_1_E591DF54310AABF5_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FD0167EB507B9435_7_METHOD_2_2280E4DCE4AABCDD_OFFSET UNITYSDK_OFFSET(0x159CE440)
#define CLASS_2_FD0167EB507B9435_7_METHOD_2_4484591CA1060976_1_OFFSET UNITYSDK_OFFSET(0x159CE880)
#define CLASS_2_FD0167EB507B9435_7_METHOD_2_4484591CA1060976_OFFSET UNITYSDK_OFFSET(0x159CE7E0)
#define CLASS_2_FD0167EB507B9435_7_METHOD_2_4B581D26F198C904_OFFSET UNITYSDK_OFFSET(0x159CE740)
#define CLASS_2_FD0167EB507B9435_7_METHOD_2_75CD1D6E954B6CBD_OFFSET UNITYSDK_OFFSET(0x159CE630)
#define CLASS_2_FD0167EB507B9435_7_UPDATE_OFFSET UNITYSDK_OFFSET(0x159CE3F0)
#define CLASS_2_FD0167EB507B9435_7__CTOR_OFFSET UNITYSDK_OFFSET(0x159CE3E0)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_7_TypeDefinitionIndex = 65016;

class Class_2_FD0167EB507B9435_7 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_E591DF54310AABF5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E591DF54310AABF5_1*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_E591DF54310AABF5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E591DF54310AABF5_1*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_7_UPDATE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>* Method_2_2280E4DCE4AABCDD()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_7_METHOD_2_2280E4DCE4AABCDD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_2_75CD1D6E954B6CBD()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_7_METHOD_2_75CD1D6E954B6CBD_OFFSET))(this);
	}

	::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::UInt32>* Method_2_4B581D26F198C904()
	{
		return ((::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_7_METHOD_2_4B581D26F198C904_OFFSET))(this);
	}

	::System::UInt32 Method_2_4484591CA1060976()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_7_METHOD_2_4484591CA1060976_OFFSET))(this);
	}

	::System::UInt32 Method_2_4484591CA1060976_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_7_METHOD_2_4484591CA1060976_1_OFFSET))(this);
	}
};
