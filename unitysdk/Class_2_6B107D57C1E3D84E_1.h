#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_6B107D57C1E3D84E_1_METHOD_2_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0x134BD9C0)
#define CLASS_2_6B107D57C1E3D84E_1_METHOD_2_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0x134BD830)
#define CLASS_2_6B107D57C1E3D84E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x134BD8C0)

inline static constexpr unsigned int Class_2_6B107D57C1E3D84E_1_TypeDefinitionIndex = 83241;

class Class_2_6B107D57C1E3D84E_1 : public ::Class_1_8377BAB19A574A40
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B107D57C1E3D84E_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_96F6E9EA89A38FD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B107D57C1E3D84E_1_METHOD_2_96F6E9EA89A38FD1_OFFSET))(this);
	}

	::System::Void Method_2_08A500CCFA7B1882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B107D57C1E3D84E_1_METHOD_2_08A500CCFA7B1882_OFFSET))(this);
	}
};
