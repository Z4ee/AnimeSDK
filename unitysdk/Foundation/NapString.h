#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace System::Threading { template <typename T> class ThreadLocal_1; }

#define FOUNDATION_NAPSTRING_GETCACHESTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1AA11FE0)
#define FOUNDATION_NAPSTRING_GET__STRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1AA0D5D0)
#define FOUNDATION_NAPSTRING_STRINGCATOBJ_OFFSET UNITYSDK_OFFSET(0x1AA11B50)
#define FOUNDATION_NAPSTRING_STRINGCAT_10_OFFSET UNITYSDK_OFFSET(0x1AA11840)
#define FOUNDATION_NAPSTRING_STRINGCAT_1_OFFSET UNITYSDK_OFFSET(0x1AA0E260)
#define FOUNDATION_NAPSTRING_STRINGCAT_2_OFFSET UNITYSDK_OFFSET(0x1AA0E590)
#define FOUNDATION_NAPSTRING_STRINGCAT_3_OFFSET UNITYSDK_OFFSET(0x1AA0E970)
#define FOUNDATION_NAPSTRING_STRINGCAT_4_OFFSET UNITYSDK_OFFSET(0x1AA0EE00)
#define FOUNDATION_NAPSTRING_STRINGCAT_5_OFFSET UNITYSDK_OFFSET(0x1AA0F340)
#define FOUNDATION_NAPSTRING_STRINGCAT_6_OFFSET UNITYSDK_OFFSET(0x1AA0F930)
#define FOUNDATION_NAPSTRING_STRINGCAT_7_OFFSET UNITYSDK_OFFSET(0x1AA0FFE0)
#define FOUNDATION_NAPSTRING_STRINGCAT_8_OFFSET UNITYSDK_OFFSET(0x1AA10740)
#define FOUNDATION_NAPSTRING_STRINGCAT_9_OFFSET UNITYSDK_OFFSET(0x1AA10F60)
#define FOUNDATION_NAPSTRING_STRINGCAT_OFFSET UNITYSDK_OFFSET(0x1AA0E220)
#define FOUNDATION_NAPSTRING_STRINGFORMATWITHPARAMS_1_OFFSET UNITYSDK_OFFSET(0x1AA0D690)
#define FOUNDATION_NAPSTRING_STRINGFORMATWITHPARAMS_2_OFFSET UNITYSDK_OFFSET(0x1AA0D940)
#define FOUNDATION_NAPSTRING_STRINGFORMATWITHPARAMS_3_OFFSET UNITYSDK_OFFSET(0x1AA0DC00)
#define FOUNDATION_NAPSTRING_STRINGFORMATWITHPARAMS_4_OFFSET UNITYSDK_OFFSET(0x1AA0DED0)
#define FOUNDATION_NAPSTRING_STRINGFORMATWITHPARAMS_OFFSET UNITYSDK_OFFSET(0x1AA0D650)
#define FOUNDATION_NAPSTRING_STRINGFORMAT_OFFSET UNITYSDK_OFFSET(0x1AA0E1E0)
#define FOUNDATION_NAPSTRING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA122A0)

namespace Foundation
{
	inline static constexpr unsigned int NapString_TypeDefinitionIndex = 8132;

	class NapString : public ::System::Object
	{
	public:
		static ::System::Threading::ThreadLocal_1<::System::Text::StringBuilder*>** StaticGet__stringBuilderTLS()
		{
			return (::System::Threading::ThreadLocal_1<::System::Text::StringBuilder*>**)Il2CppClass::FromTypeDefinitionIndex(NapString_TypeDefinitionIndex)->GetStaticField(0x71C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING__CCTOR_OFFSET))();
		}

		static ::System::Text::StringBuilder* get__stringBuilder()
		{
			return ((::System::Text::StringBuilder*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING_GET__STRINGBUILDER_OFFSET))();
		}

		static ::System::String* StringFormatWithParams(::System::String* format)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING_STRINGFORMATWITHPARAMS_OFFSET))(format);
		}

		static ::System::String* StringFormatWithParams_1(::System::String* format, ::System::Object* arg1)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING_STRINGFORMATWITHPARAMS_1_OFFSET))(format, arg1);
		}

		static ::System::String* StringFormatWithParams_2(::System::String* format, ::System::Object* arg1, ::System::Object* arg2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING_STRINGFORMATWITHPARAMS_2_OFFSET))(format, arg1, arg2);
		}

		static ::System::String* StringFormatWithParams_3(::System::String* format, ::System::Object* arg1, ::System::Object* arg2, ::System::Object* arg3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING_STRINGFORMATWITHPARAMS_3_OFFSET))(format, arg1, arg2, arg3);
		}

		static ::System::String* StringFormatWithParams_4(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING_STRINGFORMATWITHPARAMS_4_OFFSET))(format, args);
		}

		static ::System::String* StringFormat(::System::String* format_string)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING_STRINGFORMAT_OFFSET))(format_string);
		}

		static ::System::String* StringCat(::System::String* arg1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING_STRINGCAT_OFFSET))(arg1);
		}

		static ::System::String* StringCat_1(::System::String* arg1, ::System::String* arg2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING_STRINGCAT_1_OFFSET))(arg1, arg2);
		}

		static ::System::String* StringCat_2(::System::String* arg1, ::System::String* arg2, ::System::String* arg3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING_STRINGCAT_2_OFFSET))(arg1, arg2, arg3);
		}

		static ::System::String* StringCat_3(::System::String* arg1, ::System::String* arg2, ::System::String* arg3, ::System::String* arg4)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING_STRINGCAT_3_OFFSET))(arg1, arg2, arg3, arg4);
		}

		static ::System::String* StringCat_4(::System::String* arg1, ::System::String* arg2, ::System::String* arg3, ::System::String* arg4, ::System::String* arg5)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING_STRINGCAT_4_OFFSET))(arg1, arg2, arg3, arg4, arg5);
		}

		static ::System::String* StringCat_5(::System::String* arg1, ::System::String* arg2, ::System::String* arg3, ::System::String* arg4, ::System::String* arg5, ::System::String* arg6)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING_STRINGCAT_5_OFFSET))(arg1, arg2, arg3, arg4, arg5, arg6);
		}

		static ::System::String* StringCat_6(::System::String* arg1, ::System::String* arg2, ::System::String* arg3, ::System::String* arg4, ::System::String* arg5, ::System::String* arg6, ::System::String* arg7)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING_STRINGCAT_6_OFFSET))(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
		}

		static ::System::String* StringCat_7(::System::String* arg1, ::System::String* arg2, ::System::String* arg3, ::System::String* arg4, ::System::String* arg5, ::System::String* arg6, ::System::String* arg7, ::System::String* arg8)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING_STRINGCAT_7_OFFSET))(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
		}

		static ::System::String* StringCat_8(::System::String* arg1, ::System::String* arg2, ::System::String* arg3, ::System::String* arg4, ::System::String* arg5, ::System::String* arg6, ::System::String* arg7, ::System::String* arg8, ::System::String* arg9)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING_STRINGCAT_8_OFFSET))(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
		}

		static ::System::String* StringCat_9(::System::String* arg1, ::System::String* arg2, ::System::String* arg3, ::System::String* arg4, ::System::String* arg5, ::System::String* arg6, ::System::String* arg7, ::System::String* arg8, ::System::String* arg9, ::System::String* arg10)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING_STRINGCAT_9_OFFSET))(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
		}

		static ::System::String* StringCat_10(::Il2CppArray<::System::String*>* args)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING_STRINGCAT_10_OFFSET))(args);
		}

		static ::System::String* StringCatObj(::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING_STRINGCATOBJ_OFFSET))(args);
		}

		static ::System::Text::StringBuilder* GetCacheStringBuilder(::System::String* ori)
		{
			return ((::System::Text::StringBuilder*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING_GETCACHESTRINGBUILDER_OFFSET))(ori);
		}
	};
}
