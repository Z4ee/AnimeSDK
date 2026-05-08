#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ByteArray; }
namespace System { class String; }

#define FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_1_OFFSET UNITYSDK_OFFSET(0x1B615080)
#define FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_2_OFFSET UNITYSDK_OFFSET(0x1B615240)
#define FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_3_OFFSET UNITYSDK_OFFSET(0x1B6153F0)
#define FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_4_OFFSET UNITYSDK_OFFSET(0x1B6155B0)
#define FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_5_OFFSET UNITYSDK_OFFSET(0x1B614EE0)
#define FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_6_OFFSET UNITYSDK_OFFSET(0x1B615760)
#define FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B614C20)
#define FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_1_OFFSET UNITYSDK_OFFSET(0x1B614FB0)
#define FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_2_OFFSET UNITYSDK_OFFSET(0x1B615160)
#define FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_3_OFFSET UNITYSDK_OFFSET(0x1B615310)
#define FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_4_OFFSET UNITYSDK_OFFSET(0x1B6154D0)
#define FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_5_OFFSET UNITYSDK_OFFSET(0x1B614B50)
#define FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_6_OFFSET UNITYSDK_OFFSET(0x1B615690)
#define FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_OFFSET UNITYSDK_OFFSET(0x1B614860)

namespace Foundation
{
	inline static constexpr unsigned int BinaryToolExtension_TypeDefinitionIndex = 8054;

	class BinaryToolExtension : public ::System::Object
	{
	public:
		static ::System::Boolean ToBinary(::Foundation::ByteArray* byteArray, ::System::String* val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_OFFSET))(byteArray, val);
		}

		static ::System::Boolean FromBinary(::Foundation::ByteArray* byteArray, ::System::String*& val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::String*&))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_OFFSET))(byteArray, val);
		}

		static ::System::Void ToBinary_1(::Foundation::ByteArray* byteArray, ::System::Byte val)
		{
			return ((::System::Void(*)(::Foundation::ByteArray*, ::System::Byte))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_1_OFFSET))(byteArray, val);
		}

		static ::System::Boolean FromBinary_1(::Foundation::ByteArray* byteArray, ::System::Byte& val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::Byte&))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_1_OFFSET))(byteArray, val);
		}

		static ::System::Void ToBinary_2(::Foundation::ByteArray* byteArray, ::System::Boolean val)
		{
			return ((::System::Void(*)(::Foundation::ByteArray*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_2_OFFSET))(byteArray, val);
		}

		static ::System::Boolean FromBinary_2(::Foundation::ByteArray* byteArray, ::System::Boolean& val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::Boolean&))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_2_OFFSET))(byteArray, val);
		}

		static ::System::Void ToBinary_3(::Foundation::ByteArray* byteArray, ::System::Double val)
		{
			return ((::System::Void(*)(::Foundation::ByteArray*, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_3_OFFSET))(byteArray, val);
		}

		static ::System::Boolean FromBinary_3(::Foundation::ByteArray* byteArray, ::System::Double& val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::Double&))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_3_OFFSET))(byteArray, val);
		}

		static ::System::Void ToBinary_4(::Foundation::ByteArray* byteArray, ::System::Single val)
		{
			return ((::System::Void(*)(::Foundation::ByteArray*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_4_OFFSET))(byteArray, val);
		}

		static ::System::Boolean FromBinary_4(::Foundation::ByteArray* byteArray, ::System::Single& val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::Single&))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_4_OFFSET))(byteArray, val);
		}

		static ::System::Void ToBinary_5(::Foundation::ByteArray* byteArray, ::System::Int32 val)
		{
			return ((::System::Void(*)(::Foundation::ByteArray*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_5_OFFSET))(byteArray, val);
		}

		static ::System::Boolean FromBinary_5(::Foundation::ByteArray* byteArray, ::System::Int32& val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_5_OFFSET))(byteArray, val);
		}

		static ::System::Void ToBinary_6(::Foundation::ByteArray* byteArray, ::System::UInt32 val)
		{
			return ((::System::Void(*)(::Foundation::ByteArray*, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_6_OFFSET))(byteArray, val);
		}

		static ::System::Boolean FromBinary_6(::Foundation::ByteArray* byteArray, ::System::UInt32& val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::UInt32&))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_6_OFFSET))(byteArray, val);
		}
	};
}
