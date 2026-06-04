#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_LITTLEGAMESHARE_RPCFORMATTERRESOLVER_CLASS_1_A15AF005127D4436_METHOD_1_A96F2DD1AACB42EB_OFFSET UNITYSDK_OFFSET(0x18B8D950)
#define RPG_CLIENT_LITTLEGAMESHARE_RPCFORMATTERRESOLVER_CLASS_1_A15AF005127D4436__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B8DAD0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int RpcFormatterResolver_Class_1_A15AF005127D4436_TypeDefinitionIndex = 34840;

	class RpcFormatterResolver_Class_1_A15AF005127D4436 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>** StaticGet_Field_1_0()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RpcFormatterResolver_Class_1_A15AF005127D4436_TypeDefinitionIndex)->GetStaticField(0x60220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_RPCFORMATTERRESOLVER_CLASS_1_A15AF005127D4436__CCTOR_OFFSET))();
		}

		static ::System::Object* Method_1_A96F2DD1AACB42EB(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_RPCFORMATTERRESOLVER_CLASS_1_A15AF005127D4436_METHOD_1_A96F2DD1AACB42EB_OFFSET))(a1);
		}
	};
}
