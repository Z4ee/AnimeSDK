#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SHARE_CRANDOM_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1DAA4FA0)
#define SHARE_CRANDOM_INTERNALSAMPLE_OFFSET UNITYSDK_OFFSET(0x1DAA5450)
#define SHARE_CRANDOM_NEXTBYTES_OFFSET UNITYSDK_OFFSET(0x1DAA5670)
#define SHARE_CRANDOM_NEXTDOUBLE_OFFSET UNITYSDK_OFFSET(0x1DAA5660)
#define SHARE_CRANDOM_NEXT_1_OFFSET UNITYSDK_OFFSET(0x1DAA5510)
#define SHARE_CRANDOM_NEXT_2_OFFSET UNITYSDK_OFFSET(0x1DAA55E0)
#define SHARE_CRANDOM_NEXT_OFFSET UNITYSDK_OFFSET(0x1DAA5500)
#define SHARE_CRANDOM_SAMPLE_OFFSET UNITYSDK_OFFSET(0x1DAA5430)
#define SHARE_CRANDOM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DAA5150)
#define SHARE_CRANDOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA5100)

namespace Share
{
	inline static constexpr unsigned int CRandom_TypeDefinitionIndex = 9344;

	class CRandom : public ::System::Object
	{
	public:
		static ::Share::CRandom** StaticGet_m_oDefault()
		{
			return (::Share::CRandom**)Il2CppClass::FromTypeDefinitionIndex(CRandom_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Int32 MBIG = 0x7FFFFFFF; // 0x0
		// static const ::System::Int32 MSEED = 0x9A4EC86; // 0x0
		// static const ::System::Int32 MZ = 0x0; // 0x0
		::Il2CppArray<::System::Int32>* SeedArray; // 0x10
		::System::Int32 inext; // 0x18
		::System::Int32 inextp; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CRANDOM__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 Seed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SHARE_CRANDOM__CTOR_1_OFFSET))(this, Seed);
		}

		static ::Share::CRandom* get_Default()
		{
			return ((::Share::CRandom*(*)())((::PBYTE)hIl2Cpp + SHARE_CRANDOM_GET_DEFAULT_OFFSET))();
		}

		::System::Double Sample()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CRANDOM_SAMPLE_OFFSET))(this);
		}

		::System::Int32 InternalSample()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CRANDOM_INTERNALSAMPLE_OFFSET))(this);
		}

		::System::Int32 Next()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CRANDOM_NEXT_OFFSET))(this);
		}

		::System::Int32 Next_1(::System::Int32 minValue, ::System::Int32 maxValue)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SHARE_CRANDOM_NEXT_1_OFFSET))(this, minValue, maxValue);
		}

		::System::Int32 Next_2(::System::Int32 maxValue)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SHARE_CRANDOM_NEXT_2_OFFSET))(this, maxValue);
		}

		::System::Double NextDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CRANDOM_NEXTDOUBLE_OFFSET))(this);
		}

		::System::Void NextBytes(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SHARE_CRANDOM_NEXTBYTES_OFFSET))(this, buffer);
		}
	};
}
