#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/RPG/Client/GridFightRoleChangeType.h"

class Class_1_66D6A0360B93D27A_1;
class Class_2_646CCD18043C3F6C_Class_3_6340F8F348E84260;
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_646CCD18043C3F6C_METHOD_2_6C42F1687E010F47_OFFSET UNITYSDK_OFFSET(0x17998960)
#define CLASS_2_646CCD18043C3F6C_METHOD_2_846FB62C6EE72A8A_OFFSET UNITYSDK_OFFSET(0x179990B0)
#define CLASS_2_646CCD18043C3F6C_METHOD_2_8C4710AA642393E6_OFFSET UNITYSDK_OFFSET(0x179993A0)
#define CLASS_2_646CCD18043C3F6C_METHOD_2_B4BFAA75B7B94C85_OFFSET UNITYSDK_OFFSET(0x17998F30)
#define CLASS_2_646CCD18043C3F6C_METHOD_2_FC279EE69113F51F_OFFSET UNITYSDK_OFFSET(0x17999250)
#define CLASS_2_646CCD18043C3F6C_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x17998910)
#define CLASS_2_646CCD18043C3F6C__CTOR_OFFSET UNITYSDK_OFFSET(0x17998760)

inline static constexpr unsigned int Class_2_646CCD18043C3F6C_TypeDefinitionIndex = 62273;

class Class_2_646CCD18043C3F6C : public ::Class_1_41E07A9DDAB7FC78
{
public:
	::System::Collections::Generic::List_1<::Class_2_646CCD18043C3F6C_Class_3_6340F8F348E84260*>* Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_646CCD18043C3F6C__CTOR_OFFSET))(this);
	}

	::System::Void UpdateAddRole(::Class_1_66D6A0360B93D27A_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_66D6A0360B93D27A_1*))((::PBYTE)hIl2Cpp + CLASS_2_646CCD18043C3F6C_UPDATEADDROLE_OFFSET))(this, a1);
	}

	::System::Void Method_2_6C42F1687E010F47(::Class_1_66D6A0360B93D27A_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_66D6A0360B93D27A_1*))((::PBYTE)hIl2Cpp + CLASS_2_646CCD18043C3F6C_METHOD_2_6C42F1687E010F47_OFFSET))(this, a1);
	}

	::System::Void Method_2_B4BFAA75B7B94C85(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::GridFightRoleChangeType& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::GridFightRoleChangeType&))((::PBYTE)hIl2Cpp + CLASS_2_646CCD18043C3F6C_METHOD_2_B4BFAA75B7B94C85_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::GridFightRole* Method_2_846FB62C6EE72A8A(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a4, ::System::UInt32 a5)
	{
		return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_646CCD18043C3F6C_METHOD_2_846FB62C6EE72A8A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_FC279EE69113F51F(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::GridFightRoleChangeType& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::GridFightRoleChangeType&))((::PBYTE)hIl2Cpp + CLASS_2_646CCD18043C3F6C_METHOD_2_FC279EE69113F51F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_8C4710AA642393E6(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::GridFightRoleChangeType& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::GridFightRoleChangeType&))((::PBYTE)hIl2Cpp + CLASS_2_646CCD18043C3F6C_METHOD_2_8C4710AA642393E6_OFFSET))(this, a1, a2, a3);
	}
};
