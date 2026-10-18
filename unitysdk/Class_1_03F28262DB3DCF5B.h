#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_51BA4980ED225F7B_2;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::BlindBox::Trade { class PublicBlindBoxTradeOrder; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_03F28262DB3DCF5B_METHOD_1_30EC72F74C93E66B_OFFSET UNITYSDK_OFFSET(0x15C23AC0)
#define CLASS_1_03F28262DB3DCF5B_METHOD_1_C53CEE4A85AA741E_OFFSET UNITYSDK_OFFSET(0x15C23590)

inline static constexpr unsigned int Class_1_03F28262DB3DCF5B_TypeDefinitionIndex = 74863;

class Class_1_03F28262DB3DCF5B : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* Method_1_C53CEE4A85AA741E(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_51BA4980ED225F7B_2*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_51BA4980ED225F7B_2*>*))((::PBYTE)hIl2Cpp + CLASS_1_03F28262DB3DCF5B_METHOD_1_C53CEE4A85AA741E_OFFSET))(a1);
	}

	static ::System::Void Method_1_30EC72F74C93E66B(::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_51BA4980ED225F7B_2*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_51BA4980ED225F7B_2*>*))((::PBYTE)hIl2Cpp + CLASS_1_03F28262DB3DCF5B_METHOD_1_30EC72F74C93E66B_OFFSET))(a1, a2);
	}
};
