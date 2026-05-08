#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ImgTextParserBase.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }

#define MOLEMOLE_IMGTEXTSKILLPARSER_METHOD_6_81BFB84A5077EF23_OFFSET UNITYSDK_OFFSET(0x16050970)
#define MOLEMOLE_IMGTEXTSKILLPARSER_METHOD_6_FDA1EA0B9E0923F3_OFFSET UNITYSDK_OFFSET(0x16051110)
#define MOLEMOLE_IMGTEXTSKILLPARSER_SETLEVEL_OFFSET UNITYSDK_OFFSET(0x16050920)
#define MOLEMOLE_IMGTEXTSKILLPARSER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16051230)
#define MOLEMOLE_IMGTEXTSKILLPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x160511D0)
#define MOLEMOLE_IMGTEXTSKILLPARSER___BASE_GETPARSEDTEXT_OFFSET UNITYSDK_OFFSET(0x16051340)

namespace MoleMole
{
	inline static constexpr unsigned int ImgTextSkillParser_TypeDefinitionIndex = 56086;

	class ImgTextSkillParser : public ::MoleMole::ImgTextParserBase
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_Field_6_0()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ImgTextSkillParser_TypeDefinitionIndex)->GetStaticField(0x3C7B0);
		}
		static ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::String*>>** StaticGet_Field_6_1()
		{
			return (::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::String*>>**)Il2CppClass::FromTypeDefinitionIndex(ImgTextSkillParser_TypeDefinitionIndex)->GetStaticField(0x3C7B8);
		}
		::System::Int32 m_skillLevel; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTSKILLPARSER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTSKILLPARSER__CCTOR_OFFSET))();
		}

		::System::Void SetLevel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTSKILLPARSER_SETLEVEL_OFFSET))(this, a1);
		}

		::System::String* Method_6_81BFB84A5077EF23(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTSKILLPARSER_METHOD_6_81BFB84A5077EF23_OFFSET))(this, a1);
		}

		::System::String* __base_GetParsedText(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTSKILLPARSER___BASE_GETPARSEDTEXT_OFFSET))(this, a1);
		}

		::System::String* Method_6_FDA1EA0B9E0923F3(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTSKILLPARSER_METHOD_6_FDA1EA0B9E0923F3_OFFSET))(this, a1, a2);
		}
	};
}
