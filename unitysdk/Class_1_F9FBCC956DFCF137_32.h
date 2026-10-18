#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_EAEB14864ACA411F;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_F9FBCC956DFCF137_32_METHOD_1_36987DD280F80EA1_OFFSET UNITYSDK_OFFSET(0xC316B50)
#define CLASS_1_F9FBCC956DFCF137_32_METHOD_1_A40738130934C79F_OFFSET UNITYSDK_OFFSET(0xC316AE0)
#define CLASS_1_F9FBCC956DFCF137_32__CTOR_OFFSET UNITYSDK_OFFSET(0xC316BB0)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_32_TypeDefinitionIndex = 79660;

class Class_1_F9FBCC956DFCF137_32 : public ::System::Object
{
public:
	::Class_1_EAEB14864ACA411F* EKIJFPIPCKF; // 0x10

	::System::Void _ctor(::Class_1_EAEB14864ACA411F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAEB14864ACA411F*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_32__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::TextID Method_1_A40738130934C79F()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_32_METHOD_1_A40738130934C79F_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* Method_1_36987DD280F80EA1()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_32_METHOD_1_36987DD280F80EA1_OFFSET))(this);
	}
};
