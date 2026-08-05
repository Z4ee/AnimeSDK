#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_08CADB6A2017E035_Struct_2_360763767A2E376D.h"
#include "unitysdk/Struct_2_FD37BB0C9F20D20F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_08CADB6A2017E035_METHOD_1_351843CA99EE03BD_OFFSET UNITYSDK_OFFSET(0x128D2940)
#define CLASS_1_08CADB6A2017E035_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x128D2830)
#define CLASS_1_08CADB6A2017E035_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x128D2770)
#define CLASS_1_08CADB6A2017E035_METHOD_1_4DB953415DD15B2E_OFFSET UNITYSDK_OFFSET(0x128D2D00)
#define CLASS_1_08CADB6A2017E035_METHOD_1_61F1B096EDC1AF2F_OFFSET UNITYSDK_OFFSET(0x128D3290)
#define CLASS_1_08CADB6A2017E035_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x128D27F0)
#define CLASS_1_08CADB6A2017E035_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x128D27B0)
#define CLASS_1_08CADB6A2017E035__CTOR_OFFSET UNITYSDK_OFFSET(0x128D2870)

inline static constexpr unsigned int Class_1_08CADB6A2017E035_TypeDefinitionIndex = 53892;

class Class_1_08CADB6A2017E035 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_3 = 0xFFFFFF9C; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xFFFFFFFF; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_FD37BB0C9F20D20F>* Field_1_11; // 0x10
	::System::Collections::Generic::List_1<::Class_1_08CADB6A2017E035_Struct_2_360763767A2E376D>* Field_1_4; // 0x18
	::System::Int32 Field_1_6; // 0x20
	::System::Int32 Field_1_0; // 0x24
	::System::Int32 Field_1_5; // 0x28
	::System::Single Field_1_7; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08CADB6A2017E035__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08CADB6A2017E035_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08CADB6A2017E035_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08CADB6A2017E035_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08CADB6A2017E035_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_1_351843CA99EE03BD(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_08CADB6A2017E035_METHOD_1_351843CA99EE03BD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4DB953415DD15B2E(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_08CADB6A2017E035_METHOD_1_4DB953415DD15B2E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_61F1B096EDC1AF2F(::UnityEngine::Bounds& a1, ::Struct_2_FD37BB0C9F20D20F a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds&, ::Struct_2_FD37BB0C9F20D20F))((::PBYTE)hIl2Cpp + CLASS_1_08CADB6A2017E035_METHOD_1_61F1B096EDC1AF2F_OFFSET))(this, a1, a2);
	}
};
