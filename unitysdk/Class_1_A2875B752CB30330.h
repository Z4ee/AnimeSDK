#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1059;
class Class_1_B38D05F57D395ACE;
class Class_1_B5D23F114911CF27;
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_A2875B752CB30330_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x11FE9710)
#define CLASS_1_A2875B752CB30330_METHOD_1_A420AEC4D83C2365_OFFSET UNITYSDK_OFFSET(0x11FE9780)
#define CLASS_1_A2875B752CB30330_METHOD_1_B68CB7073C14E498_OFFSET UNITYSDK_OFFSET(0x11FE9EE0)
#define CLASS_1_A2875B752CB30330__CCTOR_OFFSET UNITYSDK_OFFSET(0x11FEA010)
#define CLASS_1_A2875B752CB30330__CTOR_OFFSET UNITYSDK_OFFSET(0x11FE9FF0)

inline static constexpr unsigned int Class_1_A2875B752CB30330_TypeDefinitionIndex = 73392;

class Class_1_A2875B752CB30330 : public ::System::Object
{
public:
	static ::System::Text::RegularExpressions::Regex** StaticGet_EBGGCOCOJCC()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A2875B752CB30330_TypeDefinitionIndex)->GetStaticField(0x6F670);
	}
	// static const ::System::String* CEIJMKBACNH; // 0x0
	// static const ::System::String* DKOFDALPJDN; // 0x0
	::Class_1_B5D23F114911CF27* FLLACONDCPE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2875B752CB30330__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A2875B752CB30330__CCTOR_OFFSET))();
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2875B752CB30330_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::String* Method_1_A420AEC4D83C2365(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_1059* a3, ::Class_1_B38D05F57D395ACE* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_1059*, ::Class_1_B38D05F57D395ACE*))((::PBYTE)hIl2Cpp + CLASS_1_A2875B752CB30330_METHOD_1_A420AEC4D83C2365_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::String* Method_1_B68CB7073C14E498(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A2875B752CB30330_METHOD_1_B68CB7073C14E498_OFFSET))(a1);
	}
};
