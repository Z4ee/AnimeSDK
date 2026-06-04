#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HipplenBuilderStatus_Class_1_FF08BBE63201ECB5;
namespace System { template <typename T> class Predicate_1; }

#define HIPPLENBUILDERSTATUS___C__BUFFTIMEPASS_B__8_0_OFFSET UNITYSDK_OFFSET(0x13C6DEB0)
#define HIPPLENBUILDERSTATUS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C6DE60)
#define HIPPLENBUILDERSTATUS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13C6DEA0)

inline static constexpr unsigned int HipplenBuilderStatus___c_TypeDefinitionIndex = 44549;

class HipplenBuilderStatus___c : public ::System::Object
{
public:
	static ::HipplenBuilderStatus___c** StaticGet___9()
	{
		return (::HipplenBuilderStatus___c**)Il2CppClass::FromTypeDefinitionIndex(HipplenBuilderStatus___c_TypeDefinitionIndex)->GetStaticField(0x65740);
	}
	static ::System::Predicate_1<::HipplenBuilderStatus_Class_1_FF08BBE63201ECB5*>** StaticGet___9__8_0()
	{
		return (::System::Predicate_1<::HipplenBuilderStatus_Class_1_FF08BBE63201ECB5*>**)Il2CppClass::FromTypeDefinitionIndex(HipplenBuilderStatus___c_TypeDefinitionIndex)->GetStaticField(0x65748);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _BuffTimePass_b__8_0(::HipplenBuilderStatus_Class_1_FF08BBE63201ECB5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::HipplenBuilderStatus_Class_1_FF08BBE63201ECB5*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS___C__BUFFTIMEPASS_B__8_0_OFFSET))(this, a1);
	}
};
