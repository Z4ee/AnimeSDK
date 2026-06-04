#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"

class Class_1_B8E6D5AD8534D123;
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FD0167EB507B9435_8_METHOD_2_2280E4DCE4AABCDD_OFFSET UNITYSDK_OFFSET(0x138C0500)
#define CLASS_2_FD0167EB507B9435_8_METHOD_2_4484591CA1060976_1_OFFSET UNITYSDK_OFFSET(0x138C0940)
#define CLASS_2_FD0167EB507B9435_8_METHOD_2_4484591CA1060976_OFFSET UNITYSDK_OFFSET(0x138C08A0)
#define CLASS_2_FD0167EB507B9435_8_METHOD_2_4B581D26F198C904_OFFSET UNITYSDK_OFFSET(0x138C0800)
#define CLASS_2_FD0167EB507B9435_8_METHOD_2_75CD1D6E954B6CBD_OFFSET UNITYSDK_OFFSET(0x138C06F0)
#define CLASS_2_FD0167EB507B9435_8_UPDATE_OFFSET UNITYSDK_OFFSET(0x138C04B0)
#define CLASS_2_FD0167EB507B9435_8__CTOR_OFFSET UNITYSDK_OFFSET(0x138C04A0)
#define CLASS_2_FD0167EB507B9435_8___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x138C09E0)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_8_TypeDefinitionIndex = 60798;

class Class_2_FD0167EB507B9435_8 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_B8E6D5AD8534D123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_B8E6D5AD8534D123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_8_UPDATE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>* Method_2_2280E4DCE4AABCDD()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_8_METHOD_2_2280E4DCE4AABCDD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_2_75CD1D6E954B6CBD()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_8_METHOD_2_75CD1D6E954B6CBD_OFFSET))(this);
	}

	::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::UInt32>* Method_2_4B581D26F198C904()
	{
		return ((::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_8_METHOD_2_4B581D26F198C904_OFFSET))(this);
	}

	::System::UInt32 Method_2_4484591CA1060976()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_8_METHOD_2_4484591CA1060976_OFFSET))(this);
	}

	::System::UInt32 Method_2_4484591CA1060976_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_8_METHOD_2_4484591CA1060976_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Update(::Class_1_B8E6D5AD8534D123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_8___IFIXBASEPROXY_UPDATE_OFFSET))(this, a1);
	}
};
