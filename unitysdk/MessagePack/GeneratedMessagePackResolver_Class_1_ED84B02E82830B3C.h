#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_ED84B02E82830B3C_METHOD_1_A8321956C56DDC2A_OFFSET UNITYSDK_OFFSET(0x1C208910)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_ED84B02E82830B3C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2097B0)

namespace MessagePack
{
	inline static constexpr unsigned int GeneratedMessagePackResolver_Class_1_ED84B02E82830B3C_TypeDefinitionIndex = 35408;

	class GeneratedMessagePackResolver_Class_1_ED84B02E82830B3C : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>** StaticGet_PJHNAIJGAOI()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GeneratedMessagePackResolver_Class_1_ED84B02E82830B3C_TypeDefinitionIndex)->GetStaticField(0x1B730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_ED84B02E82830B3C__CCTOR_OFFSET))();
		}

		static ::System::Object* Method_1_A8321956C56DDC2A(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CLASS_1_ED84B02E82830B3C_METHOD_1_A8321956C56DDC2A_OFFSET))(a1);
		}
	};
}
