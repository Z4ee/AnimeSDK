#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_LITTLEGAMESHARE_RPCFORMATTERRESOLVER_CLASS_1_ED84B02E82830B3C_1_METHOD_1_A8321956C56DDC2A_OFFSET UNITYSDK_OFFSET(0xB601900)
#define RPG_CLIENT_LITTLEGAMESHARE_RPCFORMATTERRESOLVER_CLASS_1_ED84B02E82830B3C_1__CCTOR_OFFSET UNITYSDK_OFFSET(0xB601AA0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int RpcFormatterResolver_Class_1_ED84B02E82830B3C_1_TypeDefinitionIndex = 35515;

	class RpcFormatterResolver_Class_1_ED84B02E82830B3C_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>** StaticGet_Field_1_0()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RpcFormatterResolver_Class_1_ED84B02E82830B3C_1_TypeDefinitionIndex)->GetStaticField(0x5A120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_RPCFORMATTERRESOLVER_CLASS_1_ED84B02E82830B3C_1__CCTOR_OFFSET))();
		}

		static ::System::Object* Method_1_A8321956C56DDC2A(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_RPCFORMATTERRESOLVER_CLASS_1_ED84B02E82830B3C_1_METHOD_1_A8321956C56DDC2A_OFFSET))(a1);
		}
	};
}
