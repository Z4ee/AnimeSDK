#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace LitJson { class FsmContext; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define LITJSON_LEXER_STATEHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F666090)
#define LITJSON_LEXER_STATEHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F6660C0)
#define LITJSON_LEXER_STATEHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F665B70)
#define LITJSON_LEXER_STATEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F665B50)

namespace LitJson
{
	inline static constexpr unsigned int Lexer_StateHandler_TypeDefinitionIndex = 7898;

	class Lexer_StateHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATEHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::LitJson::FsmContext* ctx)
		{
			return ((::System::Boolean(*)(::PVOID, ::LitJson::FsmContext*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATEHANDLER_INVOKE_OFFSET))(this, ctx);
		}

		::System::IAsyncResult* BeginInvoke(::LitJson::FsmContext* ctx, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::LitJson::FsmContext*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATEHANDLER_BEGININVOKE_OFFSET))(this, ctx, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + LITJSON_LEXER_STATEHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
