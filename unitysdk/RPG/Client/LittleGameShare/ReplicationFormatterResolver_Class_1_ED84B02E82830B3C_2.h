#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER_CLASS_1_ED84B02E82830B3C_2_METHOD_1_A8321956C56DDC2A_OFFSET UNITYSDK_OFFSET(0xB6013D0)
#define RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER_CLASS_1_ED84B02E82830B3C_2__CCTOR_OFFSET UNITYSDK_OFFSET(0xB601590)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ReplicationFormatterResolver_Class_1_ED84B02E82830B3C_2_TypeDefinitionIndex = 35518;

	class ReplicationFormatterResolver_Class_1_ED84B02E82830B3C_2 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>** StaticGet_Field_1_0()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ReplicationFormatterResolver_Class_1_ED84B02E82830B3C_2_TypeDefinitionIndex)->GetStaticField(0x5A0F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER_CLASS_1_ED84B02E82830B3C_2__CCTOR_OFFSET))();
		}

		static ::System::Object* Method_1_A8321956C56DDC2A(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER_CLASS_1_ED84B02E82830B3C_2_METHOD_1_A8321956C56DDC2A_OFFSET))(a1);
		}
	};
}
