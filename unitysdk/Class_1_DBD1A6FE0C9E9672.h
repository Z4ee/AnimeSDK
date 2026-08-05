#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_51C724C3FB60D55B.h"
#include "unitysdk/Enum_3_6132C8F856090358.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DBD1A6FE0C9E9672_METHOD_1_2A7AB10C9A4C84F4_OFFSET UNITYSDK_OFFSET(0x15904030)
#define CLASS_1_DBD1A6FE0C9E9672_METHOD_1_3C615A1C69EA3FC8_OFFSET UNITYSDK_OFFSET(0x159043F0)
#define CLASS_1_DBD1A6FE0C9E9672_METHOD_1_83C62D2130E2E0BC_OFFSET UNITYSDK_OFFSET(0x159044B0)
#define CLASS_1_DBD1A6FE0C9E9672_METHOD_1_8A7DEF3A91110AD0_OFFSET UNITYSDK_OFFSET(0x15903F00)
#define CLASS_1_DBD1A6FE0C9E9672__CCTOR_OFFSET UNITYSDK_OFFSET(0x15903E10)

inline static constexpr unsigned int Class_1_DBD1A6FE0C9E9672_TypeDefinitionIndex = 67682;

class Class_1_DBD1A6FE0C9E9672 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DBD1A6FE0C9E9672_TypeDefinitionIndex)->GetStaticField(0x42020);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DBD1A6FE0C9E9672__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_8A7DEF3A91110AD0(::Enum_3_51C724C3FB60D55B a1)
	{
		return ((::System::Void(*)(::Enum_3_51C724C3FB60D55B))((::PBYTE)hIl2Cpp + CLASS_1_DBD1A6FE0C9E9672_METHOD_1_8A7DEF3A91110AD0_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2A7AB10C9A4C84F4(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DBD1A6FE0C9E9672_METHOD_1_2A7AB10C9A4C84F4_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3C615A1C69EA3FC8(::System::String* a1, ::Enum_3_51C724C3FB60D55B& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::Enum_3_51C724C3FB60D55B&))((::PBYTE)hIl2Cpp + CLASS_1_DBD1A6FE0C9E9672_METHOD_1_3C615A1C69EA3FC8_OFFSET))(a1, a2);
	}

	static ::Enum_3_51C724C3FB60D55B Method_1_83C62D2130E2E0BC(::Enum_3_6132C8F856090358 a1)
	{
		return ((::Enum_3_51C724C3FB60D55B(*)(::Enum_3_6132C8F856090358))((::PBYTE)hIl2Cpp + CLASS_1_DBD1A6FE0C9E9672_METHOD_1_83C62D2130E2E0BC_OFFSET))(a1);
	}
};
