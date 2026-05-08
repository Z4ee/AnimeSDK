#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Renderer; }

#define CLASS_1_51BACE83E046CB91_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x135F21D0)
#define CLASS_1_51BACE83E046CB91_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x135F21B0)
#define CLASS_1_51BACE83E046CB91_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x135F21C0)
#define CLASS_1_51BACE83E046CB91_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x135F2220)
#define CLASS_1_51BACE83E046CB91_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x135F2170)
#define CLASS_1_51BACE83E046CB91__CTOR_OFFSET UNITYSDK_OFFSET(0x135F2160)

inline static constexpr unsigned int Class_1_51BACE83E046CB91_TypeDefinitionIndex = 79317;

class Class_1_51BACE83E046CB91 : public ::System::Object
{
public:
	::UnityEngine::Renderer* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C

	::System::Void _ctor(::UnityEngine::Renderer* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_51BACE83E046CB91__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51BACE83E046CB91_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_51BACE83E046CB91_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51BACE83E046CB91_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51BACE83E046CB91_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51BACE83E046CB91_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
