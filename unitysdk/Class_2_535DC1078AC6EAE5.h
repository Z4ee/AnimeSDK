#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_B8E6D5AD8534D123;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_535DC1078AC6EAE5_GET_POSINDEXS_OFFSET UNITYSDK_OFFSET(0xB561390)
#define CLASS_2_535DC1078AC6EAE5_SET_POSINDEXS_OFFSET UNITYSDK_OFFSET(0xB5613A0)
#define CLASS_2_535DC1078AC6EAE5__CTOR_OFFSET UNITYSDK_OFFSET(0xB5612F0)

inline static constexpr unsigned int Class_2_535DC1078AC6EAE5_TypeDefinitionIndex = 65065;

class Class_2_535DC1078AC6EAE5 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _PosIndexs_k__BackingField; // 0x28

	::System::Void _ctor(::Class_1_B8E6D5AD8534D123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + CLASS_2_535DC1078AC6EAE5__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_PosIndexs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_535DC1078AC6EAE5_GET_POSINDEXS_OFFSET))(this);
	}

	::System::Void set_PosIndexs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_535DC1078AC6EAE5_SET_POSINDEXS_OFFSET))(this, a1);
	}
};
