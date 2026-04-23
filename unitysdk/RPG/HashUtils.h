#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class Stream; }

#define RPG_HASHUTILS_BUILDFILEMD5WITHEXTRAINFO_1_OFFSET UNITYSDK_OFFSET(0x19226020)
#define RPG_HASHUTILS_BUILDFILEMD5WITHEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x19225F40)
#define RPG_HASHUTILS_BUILDFILEMD5_OFFSET UNITYSDK_OFFSET(0x19224B10)
#define RPG_HASHUTILS_BUILDLOWERSTRINGHASHCODE_OFFSET UNITYSDK_OFFSET(0x19226180)
#define RPG_HASHUTILS_BUILDSTREAMMD5_OFFSET UNITYSDK_OFFSET(0x192259A0)
#define RPG_HASHUTILS_BUILDSTRINGHASHCODE_OFFSET UNITYSDK_OFFSET(0x19226280)
#define RPG_HASHUTILS_BUILDSTRINGMD5WITHEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x19225E70)
#define RPG_HASHUTILS_BUILDSTRINGMD5_OFFSET UNITYSDK_OFFSET(0x19224590)
#define RPG_HASHUTILS_BUILDSTRINGMURMURHASH3_OFFSET UNITYSDK_OFFSET(0x192260F0)
#define RPG_HASHUTILS_GETHASH_1_OFFSET UNITYSDK_OFFSET(0x19226320)
#define RPG_HASHUTILS_GETHASH_2_OFFSET UNITYSDK_OFFSET(0x19226330)
#define RPG_HASHUTILS_GETHASH_3_OFFSET UNITYSDK_OFFSET(0x19226340)
#define RPG_HASHUTILS_GETHASH_4_OFFSET UNITYSDK_OFFSET(0x19226350)
#define RPG_HASHUTILS_GETHASH_5_OFFSET UNITYSDK_OFFSET(0x19226360)
#define RPG_HASHUTILS_GETHASH_6_OFFSET UNITYSDK_OFFSET(0x19226370)
#define RPG_HASHUTILS_GETHASH_7_OFFSET UNITYSDK_OFFSET(0x19226380)
#define RPG_HASHUTILS_GETHASH_OFFSET UNITYSDK_OFFSET(0x19226310)
#define RPG_HASHUTILS_HASHCOMBINE_OFFSET UNITYSDK_OFFSET(0x19226390)
#define RPG_HASHUTILS_HASHCONTINUECOMBINEWITHINT_1_OFFSET UNITYSDK_OFFSET(0x19226570)
#define RPG_HASHUTILS_HASHCONTINUECOMBINEWITHINT_2_OFFSET UNITYSDK_OFFSET(0x19226600)
#define RPG_HASHUTILS_HASHCONTINUECOMBINEWITHINT_3_OFFSET UNITYSDK_OFFSET(0x19226700)
#define RPG_HASHUTILS_HASHCONTINUECOMBINEWITHINT_4_OFFSET UNITYSDK_OFFSET(0x19226860)
#define RPG_HASHUTILS_HASHCONTINUECOMBINEWITHINT_5_OFFSET UNITYSDK_OFFSET(0x19226A20)
#define RPG_HASHUTILS_HASHCONTINUECOMBINEWITHINT_OFFSET UNITYSDK_OFFSET(0x19226560)
#define RPG_HASHUTILS_HASHCONTINUECOMBINE_OFFSET UNITYSDK_OFFSET(0x19226420)

namespace RPG
{
	inline static constexpr unsigned int HashUtils_TypeDefinitionIndex = 8882;

	class HashUtils : public ::System::Object
	{
	public:
		static ::System::String* BuildStringMd5(::System::String* strContent)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_BUILDSTRINGMD5_OFFSET))(strContent);
		}

		static ::System::String* BuildFileMd5(::System::String* filePath, ::System::Int32 sleepFreq, ::System::Int32 sleepMS)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_BUILDFILEMD5_OFFSET))(filePath, sleepFreq, sleepMS);
		}

		static ::System::String* BuildStreamMd5(::System::IO::Stream* inputStream)
		{
			return ((::System::String*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_BUILDSTREAMMD5_OFFSET))(inputStream);
		}

		static ::System::String* BuildStringMd5WithExtraInfo(::System::String* strContent, ::System::String* extraInfo)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_BUILDSTRINGMD5WITHEXTRAINFO_OFFSET))(strContent, extraInfo);
		}

		static ::System::String* BuildFileMd5WithExtraInfo(::System::String* filePath, ::System::String* extraInfo)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_BUILDFILEMD5WITHEXTRAINFO_OFFSET))(filePath, extraInfo);
		}

		static ::System::String* BuildFileMd5WithExtraInfo_1(::System::IO::Stream* fileStream, ::System::String* extraInfo)
		{
			return ((::System::String*(*)(::System::IO::Stream*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_BUILDFILEMD5WITHEXTRAINFO_1_OFFSET))(fileStream, extraInfo);
		}

		static ::System::UInt32 BuildStringMurmurHash3(::System::String*& srcStr)
		{
			return ((::System::UInt32(*)(::System::String*&))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_BUILDSTRINGMURMURHASH3_OFFSET))(srcStr);
		}

		static ::System::Int32 BuildLowerStringHashCode(::System::String*& srcStr)
		{
			return ((::System::Int32(*)(::System::String*&))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_BUILDLOWERSTRINGHASHCODE_OFFSET))(srcStr);
		}

		static ::System::Int32 BuildStringHashCode(::System::String*& srcStr)
		{
			return ((::System::Int32(*)(::System::String*&))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_BUILDSTRINGHASHCODE_OFFSET))(srcStr);
		}

		static ::System::Boolean GetHash(::System::Boolean a, ::System::UInt32& hashValue)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_GETHASH_OFFSET))(a, hashValue);
		}

		static ::System::Boolean GetHash_1(::System::Byte a, ::System::UInt32& hashValue)
		{
			return ((::System::Boolean(*)(::System::Byte, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_GETHASH_1_OFFSET))(a, hashValue);
		}

		static ::System::Boolean GetHash_2(::System::SByte a, ::System::UInt32& hashValue)
		{
			return ((::System::Boolean(*)(::System::SByte, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_GETHASH_2_OFFSET))(a, hashValue);
		}

		static ::System::Boolean GetHash_3(::System::Char a, ::System::UInt32& hashValue)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_GETHASH_3_OFFSET))(a, hashValue);
		}

		static ::System::Boolean GetHash_4(::System::Int16 a, ::System::UInt32& hashValue)
		{
			return ((::System::Boolean(*)(::System::Int16, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_GETHASH_4_OFFSET))(a, hashValue);
		}

		static ::System::Boolean GetHash_5(::System::UInt16 a, ::System::UInt32& hashValue)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_GETHASH_5_OFFSET))(a, hashValue);
		}

		static ::System::Boolean GetHash_6(::System::Int32 a, ::System::UInt32& hashValue)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_GETHASH_6_OFFSET))(a, hashValue);
		}

		static ::System::Boolean GetHash_7(::System::UInt32 a, ::System::UInt32& hashValue)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_GETHASH_7_OFFSET))(a, hashValue);
		}

		static ::System::UInt32 HashCombine(::System::UInt32 A, ::System::UInt32 C, ::System::UInt32 CustomSeed)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_HASHCOMBINE_OFFSET))(A, C, CustomSeed);
		}

		static ::System::UInt32 HashContinueCombine(::System::UInt32 CustomSeed, ::Il2CppArray<::System::UInt32>* uints)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_HASHCONTINUECOMBINE_OFFSET))(CustomSeed, uints);
		}

		static ::System::Int32 HashContinueCombineWithInt(::System::UInt32 CustomSeed, ::System::Int32 cell)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_HASHCONTINUECOMBINEWITHINT_OFFSET))(CustomSeed, cell);
		}

		static ::System::Int32 HashContinueCombineWithInt_1(::System::UInt32 CustomSeed, ::System::Int32 cell1, ::System::Int32 cell2)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_HASHCONTINUECOMBINEWITHINT_1_OFFSET))(CustomSeed, cell1, cell2);
		}

		static ::System::Int32 HashContinueCombineWithInt_2(::System::UInt32 CustomSeed, ::System::Int32 cell1, ::System::Int32 cell2, ::System::Int32 cell3)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_HASHCONTINUECOMBINEWITHINT_2_OFFSET))(CustomSeed, cell1, cell2, cell3);
		}

		static ::System::Int32 HashContinueCombineWithInt_3(::System::UInt32 CustomSeed, ::System::Int32 cell1, ::System::Int32 cell2, ::System::Int32 cell3, ::System::Int32 cell4)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_HASHCONTINUECOMBINEWITHINT_3_OFFSET))(CustomSeed, cell1, cell2, cell3, cell4);
		}

		static ::System::Int32 HashContinueCombineWithInt_4(::System::UInt32 CustomSeed, ::System::Int32 cell1, ::System::Int32 cell2, ::System::Int32 cell3, ::System::Int32 cell4, ::System::Int32 cell5)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_HASHCONTINUECOMBINEWITHINT_4_OFFSET))(CustomSeed, cell1, cell2, cell3, cell4, cell5);
		}

		static ::System::Int32 HashContinueCombineWithInt_5(::System::UInt32 CustomSeed, ::Il2CppArray<::System::Int32>* uints)
		{
			return ((::System::Int32(*)(::System::UInt32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_HASHCONTINUECOMBINEWITHINT_5_OFFSET))(CustomSeed, uints);
		}
	};
}
